#include "Produto.hpp"
#include <iostream>

using namespace std;


int Produto::CodigoAtual = 0;

Produto::Produto(){}

Produto::Produto(int cria){
    //fazer um "confere nomeProduto" na empresa?
    SetCodigoAtual();
    this->Codigo = GetCodigoAtual();
}

void Produto::SolicitarNovoLote(int Quantidade, Date Data){

    int Validado = 0;

    for (list<MateriaPrima>::iterator positMateria = this->MateriasPrima.begin(); positMateria != this->MateriasPrima.end(); positMateria++){
        if(positMateria->GetMedida()*Quantidade > positMateria->GetEstoqueAtual()) Validado = 1;
    }
    if(Validado == 0){
        SetEstoqueAtual(Quantidade);
        SetLote(Quantidade, Data, 0);

        for (list<MateriaPrima>::iterator positMateria = this->MateriasPrima.begin(); positMateria != this->MateriasPrima.end(); positMateria++){
            positMateria->SetEstoqueAtual(-(positMateria->GetMedida()*Quantidade));
            if(positMateria->GetEstoqueAtual() < positMateria->GetEstoqueMinimo()){
                Validado = positMateria->GetEstoqueMinimo();
            }
        }
    }
    if(Validado > 0){
        if(Validado > 1) Quantidade = Validado;
        SolicitarMateriais(Quantidade, Data);
        if (Validado == 1) SolicitarNovoLote(Quantidade, Data);
    }
}
    
void Produto::SolicitarMateriais(int Quantidade, Date Data){
  
    list<float> Orcamentos;
    list<Fornecedor>::iterator positFornecedor = this->Fornecedores.begin();
    float precos, proposta, precoTotal = 0, primeiro;
    Fornecedor melhorOrcamento;

    for(list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin(); positMaterial != this->MateriasPrima.end(); positMaterial++){

        for (precos = 0, proposta = 0, primeiro = 0; positFornecedor != this->Fornecedores.end(); positFornecedor++){
            proposta = positFornecedor->RequerirOrcamento(positMaterial->GetNome(), positMaterial->GetMedida());
            
            if(proposta < precos || primeiro == 0) {
                precos = proposta;
                primeiro = 1;
            }
        }
        positMaterial->SetEstoqueAtual(Quantidade*positMaterial->GetEstoqueMinimo());
        positMaterial->SetLotes(Quantidade, Data, precos);
        precoTotal += precos;
    }

}

void Produto::SetCodigoAtual() {
    Produto::CodigoAtual++;
}

void Produto::SetLoteAtual() {
    this->LoteAtual++;
}

string Produto::GetNomeProduto() {
    return this->NomeProduto;
}

int Produto::GetEstoqueMinimo() {
    return this->EstoqueMinimo;
}

int Produto::GetEstoqueAtual() {
    return this->EstoqueAtual;
}

int Produto::GetCodigo() {
    return this->Produto::CodigoAtual;
}

int Produto::GetCodigoAtual() {
    return this->CodigoAtual;
}

int Produto::GetLoteAtual() {
    return this->LoteAtual;
}

Lote Produto::GetLote() {
    list<Lote>::iterator ultimoLote = this->Lotes.end();
    ultimoLote--;

    Lote getUltimoLote(ultimoLote->GetQuantidade(), ultimoLote->GetDataProducao(), ultimoLote->GetNumeroLote(), ultimoLote->GetValorDeCompra());

    return getUltimoLote;
}

Categoria Produto::GetCategoria() {
    return this->CategoriaProduto;
}

Valor Produto::GetValor() {
    list<Valor>::iterator valorAtual = this->ValorProduto.end();
    valorAtual--;

    Valor getvalorAtual(valorAtual->GetValor(), valorAtual->GetData());

    return getvalorAtual;
}

list <MateriaPrima> Produto::GetMateriasPrima() {
    return this->MateriasPrima;
}

list <Fornecedor> Produto::GetFornecedores(){
    return this->Fornecedores;
}

void Produto::SetNomeProduto(string NomeProduto) {
    this->NomeProduto = NomeProduto;
}

void Produto::SetLoteMinimo(int LoteMinimo) {
    this->LoteMinimo = LoteMinimo;
}

void Produto::SetEstoqueMinimo(int EstoqueMinimo) {
    this->EstoqueMinimo = EstoqueMinimo;
}

void Produto::SetEstoqueAtual(int EstoqueAtual) {
    this->EstoqueAtual += EstoqueAtual;
}

void Produto::SetLote(int Quantidade, Date Data, float ValorDeCompra) {
    SetLoteAtual();
    Lote NovoLote(Quantidade, Data, GetLoteAtual(), ValorDeCompra); 

    this->Lotes.push_back(NovoLote);
}

void Produto::SetCategoria(Categoria CategoriaProduto) {
    this->CategoriaProduto = CategoriaProduto;
}

void Produto::SetValor(Valor ValorProduto) {

    this->ValorProduto.push_back(ValorProduto);
}

void Produto::SetMateriasPrima(MateriaPrima MateriasPrima) {
    this->MateriasPrima.push_back(MateriasPrima);
}

void Produto::SetFornecedores(Fornecedor *NovoFornecedor) {
    this->Fornecedores.push_back(*NovoFornecedor);
}
