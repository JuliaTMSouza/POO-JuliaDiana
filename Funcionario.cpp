#include "Funcionario.hpp"
#include <list>

using namespace std;

string Funcionario::GetMatricula() {
    return this->Matricula;
}

string Funcionario::GetEndereco() {
    return this->Endereco;
}

Date* Funcionario::GetNascimento() {
    return this->Nascimento;
}

Departamento* Funcionario::GetDepartamentoAtual() {
    return this->DepartamentoAtual;
}

Cargo* Funcionario::GetCargoAtual() {
    return this->CargoAtual;
}

list<Admissao*> Funcionario::GetAdmissaoDemissao() {
    return this->AdmissaoDemissao;
}

list<Salario*> Funcionario::GetSalarios() {
    return this->Salarios;
}

void Funcionario::SetMatricula(string Matricula) {
    this->Matricula = Matricula;
}

void Funcionario::SetEndereco(string Endereco) {
    this->Endereco = Endereco;
}

void Funcionario::SetNascimento(Date *Nascimento) {
    this->Nascimento = Nascimento;
}

void Funcionario::SetDepartamentoAtual(Departamento *DepartamentoAtual) {
    this->DepartamentoAtual = DepartamentoAtual;
}

void Funcionario::SetCargoAtual(Cargo *CargoAtual) {
    this->CargoAtual = CargoAtual;
}

void Funcionario::SetAdmissaoDemissao(Admissao *AdmissaoDemissao) {
    // if(this->AdmissaoDemissao.GetDataDemissao())
    this->AdmissaoDemissao.push_back(AdmissaoDemissao);
}

void Funcionario::SetSalarios(Salario *Salarios) {
    this->Salarios.push_back(Salarios);
}