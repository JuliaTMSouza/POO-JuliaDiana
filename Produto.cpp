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

int Produto::GetEstoqueMinimo() {
    return this->EstoqueMinimo;
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

Producao GetMateriasPrima() {
    return this->MateriasPrima;
}

int GetQtdMateriaPrima() {
    return this->QtdMateriaPrima;
}

void Produto::SetNome(string Nome) {
    this->Nome = Nome;
}

void Produto::SetLoteMinimo(int LoteMinimo) {
    this->LoteMinimo = LoteMinimo;
}

void Produto::SetEstoqueMinimo(int EstoqueMinimo) {
    this->EstoqueMinimo = EstoqueMinimo;
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

void SetMateriasPrima(Producao MateriasPrimaProduto) {
    this->MateriasPrimaProduto = MateriasPrimaProduto;
}

void SetQtdMateriaPrima(int QtdMateriaPrima) {
    this->QtdMateriaPrima = QtdMateriaPrima;
}