#include "Pagamento.hpp"

using namespace std;

string Pagamento::GetTipo() {
    return this->Tipo;
}

void Pagamento::SetTipo(string Tipo) {
    this->Tipo = Tipo;
}