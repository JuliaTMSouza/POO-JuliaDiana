#include "Valor.hpp"


float Valor::GetValor() {
    return this->ValorProduto;
}

void Valor::SetValor(float ValorProduto) {
    this->ValorProduto = ValorProduto;
}

Date Valor::GetData() {
    return this->Data;
}

void Valor::SetData(Date Data) {
    this->Data = Data;
}
