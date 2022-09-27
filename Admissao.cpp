#include "Admissao.hpp"
#include <iostream>

using namespace std;

Admissao::Admissao(string DataAdmissao)
{
    this->DataAdmissao = DataAdmissao;
    this->DataDemissao = "";
    cout << "Novo membro adicionado" << endl;
}

string Admissao::GetDataAdmissao() {
    return this->DataAdmissao;
}

string Admissao::GetDataDemissao() {
    return this->DataDemissao;
}

void Admissao::SetDataAdmissao(string DataAdmissao) {
    this->DataAdmissao = DataAdmissao;
}

void Admissao::SetDataDemissao(string DataDemissao) {
    this->DataDemissao = DataDemissao;
}