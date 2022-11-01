#include "Orcamento.hpp"

using namespace std;

int Orcamento::GetQuantidade() {
    return this->Quantidade;
}

Date Orcamento::GetData() {
    return this->Data;
}

void Orcamento::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Orcamento::SetData(Date Data) {
    this->Data = Data;
}
