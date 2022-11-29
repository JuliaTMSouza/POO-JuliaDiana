#include "PermissaoNegada.hpp"

using namespace std;

string PermissaoNegada::GetMensagem() {
    return this->Mensagem;
}

void PermissaoNegada::SetMensagem(string Mensagem) {
    this->Mensagem = Mensagem;
}

PermissaoNegada::PermissaoNegada(Date Data, string Nome, string Entidade, string Atributo, string Mensagem) {
    this->Data = Data;
    this->Nome = Nome;
    this->Entidade = Entidade;
    this->InformacaoAcessada = Atributo;
    this->Mensagem = Mensagem;
}