#include "Valor.hpp"


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
