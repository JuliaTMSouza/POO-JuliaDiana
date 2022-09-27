#include "Produto.hpp"
#include <iostream>

using namespace std;


float Produto::GetValor() {
    return this->Valor;
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

void Produto::SetValor(float Valor) {
    this->Valor = Valor;
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

void Produto::SetCodigoAtual() {
    this->CodigoAtual++;
}

void Produto::SetLoteAtual() {
    this->LoteAtual++;
}