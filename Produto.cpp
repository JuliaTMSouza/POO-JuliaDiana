#include "Produto.hpp"
#include <iostream>

using namespace std;

Produto::Produto(){
    //fazer um "confere nome" na empresa?
    this->Codigo = GetCodigoAtual();
    SetCodigoAtual();
}

void Produto::SetCodigoAtual() {
    this->CodigoAtual++;
}

void Produto::SetLoteAtual() {
    this->LoteAtual++;
}

string Produto::GetNome() {
    return this->Nome;
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
    return this->Codigo;
}

int Produto::GetCodigoAtual() {
    return this->CodigoAtual;
}

int Produto::GetLoteAtual() {
    return this->LoteAtual;
}

Lote Produto::GetLote() {
    return *this->Lotes.end();
}

Categoria Produto::GetCategoria() {
    return this->CategoriaProduto;
}

Valor Produto::GetValor() {
    return *this->ValorProduto.end();
}

Producao Produto::GetMateriasPrima() {
    return *this->MateriasPrima.end();
}

void Produto::SetLoteMinimo(int LoteMinimo) {
    this->LoteMinimo = LoteMinimo;
}

void Produto::SetEstoqueMinimo(int EstoqueMinimo) {
    this->EstoqueMinimo = EstoqueMinimo;
}

void Produto::SetEstoqueAtual(int EstoqueAtual) {
    this->EstoqueAtual = EstoqueAtual;
}

void Produto::SetLote() {
    int Quantidade, Numero = GetLoteAtual();
    Date DataProducao;

    cout << "Quantos " << Nome << " você deseja produzir? " << endl;
    cin >> Quantidade;

    Lote NovoLote(Quantidade, DataProducao, Numero);

    this->Lotes.push_back(NovoLote);
    SetLoteAtual();
}

void Produto::SetCategoria(Categoria CategoriaProduto) {
    this->CategoriaProduto = CategoriaProduto;
}

void Produto::SetValor(Valor ValorProduto) {

    this->ValorProduto.push_back(ValorProduto);
}

void Produto::SetMateriasPrima(Producao MateriasPrima) {
    this->MateriasPrima.push_back(MateriasPrima);
}
/*
void Produto::SetQtdMateriaPrima(int QtdMateriaPrima) {
    this->QtdMateriaPrima = QtdMateriaPrima;
}
*/