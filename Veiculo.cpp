#include "Veiculo.hpp"

using namespace std;

int Veiculo::GetPlaca() {
    return this->Placa;
}

Funcionario Veiculo::GetMotoristas() {
    return this->Motoristas;
}

Rota Veiculo::GetRotas() {
    return this->Rotas;
}

string Veiculo::GetTipo(){
    return this->Tipo;
}

void Veiculo::SetRotas(Rota Rotas) {
    this->Rotas = Rotas;
}

void Veiculo::SetMotoristas(Funcionario Motoristas) {
    this->Motoristas = Motoristas;
}

void Veiculo::SetPlaca(int Placa) {
    this->Placa = Placa;
}

void Veiculo::SetTipo(string Tipo) {
    this->Tipo = Tipo;
}

