#include "Cartao.hpp"

using namespace std;

int Cartao::GetNumeroCartao() {
    return this->NumeroCartao;
}

Date Cartao::GetValidade() {
    return this->Validade;
}

string Cartao::GetNome() {
    return this->Nome;
}

int Cartao::GetParcelas() {
    return this->Parcelas;
}

void Cartao::SetNumeroCartao(int NumeroCartao) {
    this->NumeroCartao = NumeroCartao;
}

void Cartao::SetValidade(Date Validade) {
    this->Validade = Validade;
}

void Cartao::SetNome(string Nome) {
    this->Nome = Nome;
}

void Cartao::SetParcelas(int Parcelas) {
    this->Parcelas = Parcelas;
}