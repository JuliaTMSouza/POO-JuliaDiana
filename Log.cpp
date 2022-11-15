#include "Log.hpp"

using namespace std;

Date Log::GetData() {
    return this->Data;
}

string Log::GetEntidade() {
    return this->Entidade;
}

Pessoa Log::GetUsuario() {
    return this->Usuario;
}

void Log::SetData(Date Data) {
    this->Data = Data;
}

void Log::SetEntidade(string Entidade) {
    this->Entidade = Entidade;
}

void Lote::SetUsuario(Pessoa usuário) {
    this->Usuario = usuario;
}