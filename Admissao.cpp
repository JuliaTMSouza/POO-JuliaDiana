#include "Admissao.hpp"
#include <iostream>

using namespace std;

Date Admissao::GetDataAdmissao() {
    return this->DataAdmissao;
}

Date Admissao::GetDataDemissao() {
    return this->DataDemissao;
}

void Admissao::SetDataAdmissao(Date DataAdmissao) {
    this->DataAdmissao = DataAdmissao;
}

void Admissao::SetDataDemissao(Date DataDemissao) {
    this->DataDemissao = DataDemissao;
}