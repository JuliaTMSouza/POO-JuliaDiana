#include "Valor.hpp"


Valor::Valor(){}

Valor::Valor(float ValorProduto, Date Data){
    this->ValorProduto = ValorProduto;
    this->Data = Data;
}

float Valor::GetValor() {
    return this->ValorProduto;
}

Date Valor::GetData() {
    return this->Data;
}

void Valor::SetValor(float ValorProduto) {
    this->ValorProduto = ValorProduto;
}

void Valor::SetData(Date Data) {
    this->Data = Data;
}
