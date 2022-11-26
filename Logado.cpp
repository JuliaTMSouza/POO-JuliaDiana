#include "Logado.hpp"

void Logado::SetPermissoes(Permissao Permissoes) {
    this->Permissoes = Permissoes;
}

Permissao Logado::GetPermissoes() {
    return this-> Permissoes;
}

int Logado::VerificarPermissao(string NomeMetodo) {
    int counter = 0;
    list<string> Permissoes = this->Permissoes.GetNaoPermitido();
    list<string>::iterator it;
    string key = NomeMetodo;
    for (it = Permissoes.begin(); it != Permissoes.end(); it++) {
      if(it->find(key) != string::npos) counter++;
    }
    return counter;
}
