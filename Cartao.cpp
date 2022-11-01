#include "Cartao.hpp"

using namespace std;

bool Validacao(int NumeroCartao){
    //como vamos fazer essa validação?
    return true;
}

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
    if(Validacao(NumeroCartao)) this->NumeroCartao = NumeroCartao;
    else cout >> "Cartão Inválido\n";
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