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
    this->Prazo = Prazo;
}

void Boleto::SetVencimento(Date Vencimento) {
    this->Vencimento = Vencimento;
}

void Boleto::SetNome(string Nome) {
    this->Nome = Nome;
}