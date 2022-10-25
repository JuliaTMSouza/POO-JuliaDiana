#include "PermissaoNegada.hpp"

using namespace std;

string PermissaoNegada::GetMensagem() {
    return this->Mensagem;
}

void PermissaoNegada::SetMensagem(string Mensagem) {
    this->Mensagem = Mensagem;
}