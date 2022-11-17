#include "Logado.hpp"

bool Logado::GetLogado() {
    return this->PessoaLogada;
}

Logado::Logado(){
    bool isLogado = getLogado();
    if(!isLogado) this->PessoaLogada = true;
}

/*
void Logado::SetLogado() {
    this->PessoaLogada = PessoaLogada;
}
*/
