#include "Log.hpp"

using namespace std;

Date Log::GetData() {
    return this->Data;
}

string Log::GetEntidade() {
    return this->Entidade;
}

string Log::GetNome() {
    return this->Nome;
}

void Log::SetData(Date Data) {
    this->Data = Data;
}

void Log::SetEntidade(string Entidade) {
    this->Entidade = Entidade;
}

void Log::SetNome(string Nome) {
    this->Nome = Nome;
}