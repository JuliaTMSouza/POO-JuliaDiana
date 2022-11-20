#include "Cartao.hpp"

using namespace std;

bool Validacao(char NumeroCartao[16]){
    //como vamos fazer essa validação?
    int total = (int) NumeroCartao[0];

    for(int i = 13, aux; i > 0; i -= 2){
        aux = 2* (int) NumeroCartao[i];
        if(aux > 9) aux -= 9;
        total += aux;
        total += (int) NumeroCartao[i+1];
    }

    int modulo = total - (total/10) * 10;

    if(modulo != (int) NumeroCartao[15]) return false;
            // https://pt.stackoverflow.com/questions/97234/validar-n%C3%BAmero-cart%C3%A3o-de-cr%C3%A9dito
    return true;
}

string Cartao::GetNumeroCartao() {
    string Cartao;
    int i;

    for(int i = 0; i < 16; i++){
        Cartao = Cartao + this->NumeroCartao[i];
        if(i == 3 || i == 7 || i == 11){
            Cartao = Cartao + ' ';
        }
    }

    return Cartao;
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

void Cartao::SetNumeroCartao(char NumeroCartao[16]) {
    if(Validacao(NumeroCartao)) strcpy(this->NumeroCartao, NumeroCartao);
    else cout << "Cartão Inválido\n";
}

void Cartao::SetValidade(Date Validade) {
    this->Validade = Validade;
}

void Cartao::SetNome(string Nome) {
    this->Nome = Nome;
}

void Cartao::SetParcelas(int Parcelas) {
    if(Parcelas > 6) cout << "Parcelas inválidas";// Dá pra resolver isso logo na entrada tb
    //quando for chamar a fuanção na main só por um switch case
    this->Parcelas = Parcelas;
}