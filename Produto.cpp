#include "Produto.hpp"
#include <iostream>

using namespace std;


int Produto::CodigoAtual = 0;

Produto::Produto(){
    //fazer um "confere nomeProduto" na empresa?
    SetCodigoAtual();
    this->Codigo = GetCodigoAtual();
}

void Produto::SolicitarNovoLote(int Quantidade, Date Data){

    int Validado = 0;
    if (Quantidade < this->GetEstoqueMinimo()) Quantidade = this->GetEstoqueMinimo();

    for (list<MateriaPrima>::iterator positMateria = this->MateriasPrima.begin(); positMateria != this->MateriasPrima.end(); positMateria++){
        //comparar se os materiais q ainda tem são suficientes pra produzir
        if(positMateria->GetEstoqueMinimo()*Quantidade > positMateria->GetEstoqueAtual()) Validado = 1;
    }

    if(Validado = 0){
        //novo lote produzido, então tira os materiais necessarios da quantidade armazenada
        SetEstoqueAtual(Quantidade);
        SetLote(Quantidade, Data);
        for (list<MateriaPrima>::iterator positMateria = this->MateriasPrima.begin(); positMateria != this->MateriasPrima.end(); positMateria++){
            positMateria->SetEstoqueAtual(positMateria->GetEstoqueMinimo()*Quantidade);
        }
    }
    else{
        SolicitarMateriais(Quantidade);
    }

    //Puxa daqui sapoha
    //teoricamente faz um orçamento?
    //pq teria q pedir os materiais pra criar um novo né, sla...
    //QUANDO CRIAR MATERIA PRIMA ATUALIZA TODO O ESTOQUE. ENTÃO ACHO Q É SÓ PEDIR, N PRECISA FICAR COMPARANDO MT COISA N.
    //É COMO SE O ESTOQUE DE MATERIA FOSSE O ESSENCIAL PARA CRIAR.
    //QUANDO FIZER, ENVIAR PEDIDO DE ORÇAMENTO PARA TODO OS FORNECEDORES. COMPARAR OS PREÇOS E VER O MENOR PRA COMPRAR DESSE Q FOR MENOR.
    //SE PA ISSO TUDO FICARIA NO SOLICITAR MATERIAIS
}
    
void Produto::SolicitarMateriais(int Quantidade){
    list<float> Orcamentos;
    list<Fornecedor>::iterator positFornecedor = this->Fornecedores.begin();
    float precos;
    Fornecedor melhorOrcamento;

    
    for (; positFornecedor != this->Fornecedores.end(); positFornecedor++){
        precos = 0;
        for(list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin(); positMaterial != this->MateriasPrima.end(); positMaterial++){
            precos += Quantidade*positMaterial->GetEstoqueMinimo() * positFornecedor->RequerirOrcamento(positMaterial->GetNome(), positMaterial->GetMedida());
        }
        Orcamentos.push_back(precos);
    }
    
    positFornecedor = this->Fornecedores.begin();
    precos = *Orcamentos.begin();
    for (list<float>::iterator positOrcamentos = Orcamentos.begin()++; positOrcamentos != Orcamentos.end(); positOrcamentos++){
        if(precos > *positOrcamentos) {
            precos = *positOrcamentos;
            melhorOrcamento = *positFornecedor;
        }
        positFornecedor++;
    }

    
    //Teoricamente agr ele compara os preços e solicita. Mas oq fazer com essa informação? Armazena em Empresa que foi comprado x coisas com y valor?
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

int Produto::GetLoteMinimo() {
    return this->LoteMinimo;
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
    return *this->Lotes.begin();
}

Categoria Produto::GetCategoria() {
    return this->CategoriaProduto;
}

Valor Produto::GetValor() {
    return *this->ValorProduto.end();
}

list <MateriaPrima> Produto::GetMateriasPrima() {
    return this->MateriasPrima;
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

void Produto::SetLote(int Quantidade, Date Data) {
    SetLoteAtual();
    cout << "entrou\n" << GetLoteAtual() << " " << Quantidade << endl;
    Lote NovoLote(Quantidade, Data, GetLoteAtual());
    cout << "numero interno: " << NovoLote.GetNumeroLote() << endl;
    /*this->*/Lotes.push_back(NovoLote);
    list<Lote>::iterator positLoteAtual = this->Lotes.end()--;
    cout << "fim: " << this->LoteAtual << endl;
    cout << "ainda dentro:  " << Lotes.begin()->GetNumeroLote() << endl;
    cout << "ainda dentroII:  " << positLoteAtual->GetNumeroLote() << endl;
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
