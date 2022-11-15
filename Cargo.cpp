#include "Cargo.hpp"

using namespace std;

string Cargo::GetNome() {
    return this->Nome;
}

string Cargo::GetEscopo() {
    return this->Escopo;
}

void Cargo::SetNome(string Nome) {
    this->Nome = Nome;
}

void Cargo::SetEscopo(string Escopo) {
    this->Escopo = Escopo;
}


