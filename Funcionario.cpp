#include "Funcionario.hpp"

#include <iostream>

using namespace std;

string Funcionario::GetMatricula() {
    return this->Matricula;
}

string Funcionario::GetEndereco() {
    return this->Endereco;
}

string Funcionario::GetNascimento() {
    return this->Nascimento;
}

string Funcionario::GetCargoAtual() {
    return this->CargoAtual->GetNome(); 
}

string Funcionario::GetDepartamentoAtual() {
    return this->DepartamentoAtual->GetNome(); 
}

void Funcionario::SetMatricula(string Matricula) {
    this->Matricula = Matricula;
}

void Funcionario::SetEndereco(string Endereco) {
    this->Endereco = Endereco;
}

void Funcionario::SetNascimento(string Nascimento) {
    this->Nascimento = Nascimento;
}

void Funcionario::SetCargoAtual(Cargo *CargoAtual) {
    this->CargoAtual = CargoAtual;
}

void Funcionario::SetDepartamentoAtual(Departamento *DepartamentoAtual) {
    this->DepartamentoAtual = DepartamentoAtual;
}
/*
Funcionario::Funcionario(){
    cout << "entrou";
}
*/