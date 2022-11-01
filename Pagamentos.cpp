#include "Pagamentos.hpp"

using namespace std;

string Pagamentos::GetTipo() {
    return this->Tipo;
}

void Pagamentos::SetTipo(string Tipo) {
    this->Tipo = Tipo;
}