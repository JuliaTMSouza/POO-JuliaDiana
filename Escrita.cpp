#include "Escrita.hpp"

using namespace std;

string Escrita::GetAtributoAnterior() {
    return this->AtributoAnterior;
}

string Escrita::GetAtributoAtual() {
    return this->AtributoAtual;
}

void Escrita::SetAtributoAnterior(string AtributoAnterior) {
    this->AtributoAnterior = AtributoAnterior;
}

void Escrita::SetAtributoAtual(string AtributoAtual) {
    this->AtributoAtual = AtributoAtual;
}

Escrita::Escrita(Date Data, string Nome, string Entidade, string informacaoAtual, string informacaoAnterior) {
    this->Data = Data;
    this->Nome = Nome;
    this->Entidade = Entidade;
    this->AtributoAtual = informacaoAtual;
    this->AtributoAnterior = informacaoAnterior;
}