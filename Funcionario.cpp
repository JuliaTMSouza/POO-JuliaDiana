#include "Funcionario.hpp"

using namespace std;

string Funcionario::GetMatricula() {
    return this->Matricula;
}

string Funcionario::GetEndereco() {
    string enderecoCompleto = "Pais: " + EnderecoAtual.GetPais() + ", " + EnderecoAtual.GetEstado() + ", " + EnderecoAtual.GetCidade() + ", " + EnderecoAtual.GetRua() + ", " + EnderecoAtual.GetNumero() + ", " + EnderecoAtual.GetComplemento();
    return enderecoCompleto;
}

string Funcionario::GetNascimento() {
    return this->Nascimento;
}

Departamento Funcionario::GetDepartamentoAtual() {
    return this->DepartamentoAtual;
}

string Funcionario::GetCargoAtual() {
    string cargoCompleto = "Nome: " + CargoAtual.GetNome() + '\n' + "Descricao: " + CargoAtual.GetEscopo() + '\n';
    return cargoCompleto;
}

// Admissao Funcionario::GetAdmissaoDemissao() {
//     return this->AdmissaoDemissao;
// }

void Funcionario::SetMatricula(string Matricula) {
    this->Matricula = Matricula;
}

void Funcionario::SetEndereco(Endereco Endereco) {
    this->Endereco = Endereco;
}

void Funcionario::SetNascimento(string Nascimento) {
    this->Nascimento = Nascimento;
}

void Funcionario::SetDepartamentoAtual(Departamento DepartamentoAtual) {
    this->DepartamentoAtual = DepartamentoAtual;
}

void Funcionario::SetCargoAtual(Cargo CargoAtual) {
    this->CargoAtual = CargoAtual;
}

// void Funcionario::SetAdmissaoDemissao(Admissao AdmissaoDemissao) {
//     this->AdmissaoDemissao = AdmissaoDemissao;
// }

/*
Funcionario::Funcionario(){
    cout << "entrou";
}
*/