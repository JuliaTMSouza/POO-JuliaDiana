#include "Permissao.hpp"
#include <iostream>

using namespace std;

list<string> Permissao::GetNaoPermitido() {
    return this->NaoPermitido;
}

void Permissao::SetNaoPermitido(string NaoPermitido) {
    this->NaoPermitido.push_back(NaoPermitido);
}

int Permissao::VerificarPermissao(Permissao Permissao, string NomeMetodo) {
    int counter = 0;
    list<string>::iterator it;
    string key = NomeMetodo;
    for (it = Permissao.NaoPermitido.begin(); it != Permissao.NaoPermitido.end(); it++) {
      if(it->find(key) != string::npos) counter++;
    }
    return counter;
}