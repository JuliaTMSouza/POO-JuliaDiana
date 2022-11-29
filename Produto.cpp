#include "Produto.hpp"
#include <iostream>

using namespace std;


int Produto::CodigoAtual = 0;

Produto::Produto(){}

Produto::Produto(int cria){
    SetCodigoAtual();
    this->Codigo = GetCodigoAtual();
}

void Produto::SolicitarNovoLote(int Quantidade, Date Data){
    SetCodigoAtual();
    this->Codigo = GetCodigoAtual();

    int Validado = 0;

    for (list<MateriaPrima>::iterator positMateria = this->MateriasPrima.begin(); positMateria != this->MateriasPrima.end(); positMateria++){
        //cout << "  compara se ja tem estoque: ";
        //cout << positMateria->GetNome();
        //cout << positMateria->GetMedida()*Quantidade << " " << positMateria->GetEstoqueAtual() << endl;
        if(positMateria->GetMedida()*Quantidade > positMateria->GetEstoqueAtual()) Validado = 1;
        //cout << "  Validado: " << Validado << endl;
    }   //cout << "\n";

    //if(this->MateriasPrima.begin() == this->MateriasPrima.end()) Validado = 1;
    //cout << "\nValidado final: " << Validado << endl;

    if(Validado == 0){
        SetEstoqueAtual(Quantidade);
        SetLote(Quantidade, Data, this->GetValor().GetValor());
        //cout << "  inform novo lote: " << Quantidade << " " ;
        for (list<MateriaPrima>::iterator positMateria = this->MateriasPrima.begin(); positMateria != this->MateriasPrima.end(); positMateria++){
            positMateria->SetEstoqueAtual(-(positMateria->GetMedida()*Quantidade));
            //cout << "  removeu do estoque de mat: " << (positMateria->GetMedida()*Quantidade) << endl;
            if(positMateria->GetEstoqueAtual() < positMateria->GetEstoqueMinimo()){
                //cout << "  estoque ficou pequeno\n";
                Validado = (int) (positMateria->GetEstoqueMinimo())+Quantidade;
            }
        }
    }
    if(Validado > 0){
        int Pedido = Quantidade;
        //cout << "precisou de mais materia: ";
        if(Validado > 1) Pedido = Validado;
        //if(Quantidade == this->GetEstoqueMinimo()) Pedido = Quantidade*2;
        SolicitarMateriais(Pedido, Data);
        if (Validado == 1) /*cout << "novo lote\n";*/SolicitarNovoLote(Quantidade, Data);
    }
    /*else {
        cout << "error " ;
        list<Fornecedor>::iterator positFornecedor = this->GetFornecedores().begin();
        for(; positFornecedor != this->GetFornecedores().end(); positFornecedor++){
            positFornecedor->AtualizaPrecoMateriais(Data);
        }
    }*/

}
    
void Produto::SolicitarMateriais(int Quantidade, Date Data){
    //cout << " solicitando: " << Quantidade << "\n";
    list<float> Orcamentos;
    list<Fornecedor>::iterator positFornecedor = this->Fornecedores.begin();
    float precos, proposta, precoTotal = 0, primeiro = 0;
    Fornecedor melhorOrcamento;

    //cout << "tamanho materia prima in " << this->MateriasPrima.size() << endl;
    for(list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin(); positMaterial != this->MateriasPrima.end(); positMaterial++){
        //cout << "tamanho fornecedores in " << this->Fornecedores.size() << endl;
        for (precos = 0, proposta = 0, primeiro = 0; positFornecedor != this->Fornecedores.end(); positFornecedor++){
            proposta = positFornecedor->RequerirOrcamento(positMaterial->GetNome(), Quantidade*positMaterial->GetMedida());
            //positFornecedor->AtualizaPrecoMateriais(Data);
            //cout << "propostas: " << proposta <<  " " << precos << endl;
            if(proposta < precos || primeiro == 0) {
                //cout <<  "novo escolhido";
                precos = proposta;
                primeiro = 1;
            }
        }
        //cout << positMaterial->GetNome();
        float minimo = positMaterial->GetEstoqueMinimo();
        //cout << "MINIMO : " << minimo << endl;
        positMaterial->SetEstoqueAtual(Quantidade*minimo);
        positMaterial->SetLotes(Quantidade, Data, precos);
        precoTotal += precos;
    }
    this->SetValor(Valor(precoTotal, Data));
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
    //cout << this->EstoqueAtual ;
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

void Produto::SetFornecedores(list<Fornecedor> *NovoFornecedor) {
    this->Fornecedores = *NovoFornecedor;
}
