#include "Salario.hpp"
#include <iostream>

using namespace std;

float Salario::GetValor(){
    return this->Valor;
}

string Salario::GetDataSalario() {
    return this->DataSalario;
}

string Salario::GetDescricao() {
    return this->Descricao;
}

void Salario::SetValor(float Valor) {
    this->Valor = Valor;
}

void Salario::SetDataSalario(string DataSalario) {
    this->DataSalario = DataSalario;
}

void Salario::SetDescricao(string Descricao) {
    this->Descricao = Descricao;
}