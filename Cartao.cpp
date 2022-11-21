#include "Cartao.hpp"

using namespace std;

bool Cartao::Validacao(char NumeroCartao[16]){
    //nao tá funcionando. n sei se é a lógica q tá errada, ou o código.
    //fazer um "confere data" pra ver se a data do cartão está em dia (ser maior q a data da última parcela)

    int total = (int) NumeroCartao[0];

    for(int i = 13, aux; i > 0; i -= 2){
        aux = 2* (int) NumeroCartao[i];
        if(aux > 9) aux -= 9;
        total += aux;
        total += (int) NumeroCartao[i+1];
    }

    int modulo = total - (total/10) * 10;

    cout << "\nmod: " <<  modulo << " " << NumeroCartao[15] << endl;
    //if(modulo != ((int) NumeroCartao[15])) return false;
            // https://pt.stackoverflow.com/questions/97234/validar-n%C3%BAmero-cart%C3%A3o-de-cr%C3%A9dito
    return true;
}

string Cartao::GetNumeroCartao() {
    char cCartao[NumeroCartao.length()];
    strcpy(cCartao, NumeroCartao.c_str());

    string Cartao;

    for(int i = 0; i < 16; i++){
        Cartao = Cartao + cCartao[i];
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
    cout << "g " << this->Nome << endl;
    return this->Nome;
}

int Cartao::GetParcelas() {
    return this->Parcelas;
}

void Cartao::SetNumeroCartao(string NumeroCartao) {
    //cout << "\n nc: " << NumeroCartao << endl;
    char cCartao[NumeroCartao.length()];
    strcpy(cCartao, NumeroCartao.c_str());

    if(Validacao(cCartao)) this->NumeroCartao = NumeroCartao;
    else cout << "Cartao Invalido\n";
}

void Cartao::SetValidade(Date Validade) {
    this->Validade = Validade;
}

void Cartao::SetNome(string Nome) {
    cout << "UEE " << Nome << endl;
    this->Nome = Nome;
    cout << "d " << this->Nome << endl;
}

void Cartao::SetParcelas(int Parcelas) {
    if(Parcelas > 6) cout << "Parcelas invalidas";// Dá pra resolver isso logo na entrada tb
    //quando for chamar a fuanção na main só por um switch case
    this->Parcelas = Parcelas;
}