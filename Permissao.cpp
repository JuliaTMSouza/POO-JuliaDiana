#include "Permissao.hpp"
#include <iostream>

using namespace std;

list<string> Permissao::GetNaoPermitido() {
    return this->NaoPermitido;
}

void Permissao::SetNaoPermitido(string NaoPermitido) {
    this->NaoPermitido.push_back(NaoPermitido);
}