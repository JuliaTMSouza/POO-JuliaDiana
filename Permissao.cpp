#include "Permissao.hpp"

using namespace std;

list <string> Permissao::GetNaoPermitido() {
    return this->NaoPermitido;
}

void Permissao::SetNaoPermitido(list <string> NaoPermitido) {
    this->NaoPermitido = NaoPermitido;
}