#include "Veiculo.hpp"

using namespace std;

string Veiculo::GetPlaca() {
    return this->Placa;
}

/*Funcionario Veiculo::GetMotoristas() {
    return this->Motoristas;
}*/

list<Rota> Veiculo::GetRotas() {
    return this->Rotas;
}

string Veiculo::GetTipo(){
    return this->Tipo;
}

/*void Veiculo::SetMotoristas(Funcionario Motoristas) {
    this->Motoristas = Motoristas;
}*/

void Veiculo::SetRotas(Rota Rotas) {
    this->Rotas.push_back(Rotas);
}

void Veiculo::SetPlaca(string Placa) {
    this->Placa = Placa;
}

void Veiculo::SetTipo(string Tipo) {
    this->Tipo = Tipo;
}

