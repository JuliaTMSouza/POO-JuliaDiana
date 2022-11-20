#include "Boleto.hpp"

using namespace std;

int Boleto::GetPrazo() {
    return this->Prazo;
}

Date Boleto::GetVencimento() {
    return this->Vencimento;
}

string Boleto::GetNome() {
    return this->Nome;
}

void Boleto::SetPrazo(int Prazo) {
    if(Prazo != 30 || Prazo != 60 || Prazo != 90) cout << "Prazo inválido";// Dá pra resolver isso logo na entrada tb
    //quando for chamar a fuanção na main só por um switch case
    this->Prazo = Prazo;
}

void Boleto::SetVencimento(Date Vencimento) {
    this->Vencimento = Vencimento;
}

void Boleto::SetNome(string Nome) {
    this->Nome = Nome;
}