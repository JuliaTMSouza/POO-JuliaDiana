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