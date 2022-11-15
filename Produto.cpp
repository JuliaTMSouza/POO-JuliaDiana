#include "Produto.hpp"
#include <iostream>

using namespace std;


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
    return this->Lotes;
}

Categoria Produto::GetCategoria() {
    return this->CategoriaProduto;
}

Valor Produto::GetValor() {
    return this->ValorProduto;
}

Producao Produto::GetMateriasPrima() {
    return this->MateriasPrima;
}

int Produto::GetQtdMateriaPrima() {
    return this->QtdMateriaPrima;
}

void Produto::SetNome(string Nome) {
    this->Nome = Nome;
}

void Produto::SetLoteMinimo(int LoteMinimo) {
    this->LoteMinimo = LoteMinimo;
}

void Produto::SetEstoqueAtual(int EstoqueAtual) {
    this->EstoqueAtual = EstoqueAtual;
}

void Produto::SetCodigo() {
    this->Codigo = GetCodigoAtual();
    SetCodigoAtual();
}

void Produto::SetLote() {
    this->Lotes.SetNumero(GetLoteAtual());
    SetLoteAtual();
}

void Produto::SetCategoria(Categoria CategoriaProduto) {
    this->CategoriaProduto = CategoriaProduto;
}

void Produto::SetValor(Valor ValorProduto) {
    this->ValorProduto = ValorProduto;
}

void Produto::SetMateriasPrima(Producao MateriasPrima) {
    this->MateriasPrima = MateriasPrima;
}

void Produto::SetQtdMateriaPrima(int QtdMateriaPrima) {
    this->QtdMateriaPrima = QtdMateriaPrima;
}
