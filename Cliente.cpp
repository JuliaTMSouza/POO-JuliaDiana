#include "Cliente.hpp"

using namespace std;

string Cliente::GetTelefone() {
    return this->Telefone;
}

Orcamento Cliente::GetOrcamentoAtual() {
    return this->OrcamentoAtual;
}

void Cliente::SetTelefone(string Telefone) {
    this->Telefone = Telefone;
}

void Cliente::SetOrcamentoAtual(string OrcamentoAtual) {
    this->OrcamentoAtual = OrcamentoAtual;
}