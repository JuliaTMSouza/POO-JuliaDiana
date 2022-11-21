#include "Endereco.hpp"

using namespace std;

string Endereco::GetPais() {
    return this->Pais;
}

string Endereco::GetEstado() {
    return this->Estado;
}

string Endereco::GetCidade() {
    return this->Cidade;
}

string Endereco::GetRua() {
    return this->Rua;
}

int Endereco::GetNumero() {
    return this->Numero;
}

int Endereco::GetComplemento() {
    return this->Numero;
} 

void Endereco::SetPais(string Pais) {
    this->Pais = Pais;
}

void Endereco::SetEstado(string Estado) {
    this->Estado = Estado;
}

void Endereco::SetCidade(string Cidade) {
    this->Cidade = Cidade;
}

void Endereco::SetRua(string Rua) {
    this->Rua = Rua;
}

void Endereco::SetNumero(int Numero) {
    this->Numero = Numero;
}

void Endereco::SetComplemento(int Complemento) {
    this->Complemento = Complemento;
}