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

void Funcionario::SetMatricula(string Matricula) {
    this->Matricula = Matricula;
}

void Funcionario::SetEndereco(string Endereco) {
    this->Endereco = Endereco;
}

void Funcionario::SetNascimento(string Nascimento) {
    this->Nascimento = Nascimento;
}
/*
Funcionario::Funcionario(){
    cout << "entrou";
}
*/