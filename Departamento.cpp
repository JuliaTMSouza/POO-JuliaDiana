#include "Departamento.hpp"

using namespace std;

string Departamento::GetNome() {
    return this->Nome;
}

string Departamento::GetDescricao() {
    return this->Descricao;
}

void Departamento::SetNome(string Nome) {
    this->Nome = Nome;
}

void Departamento::SetDescricao(string Descricao) {
    this->Descricao = Descricao;
}
