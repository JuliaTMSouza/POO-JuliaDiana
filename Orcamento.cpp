#include "Orcamento.hpp"

using namespace std;

Orcamento::Orcamento(){}

Orcamento::Orcamento(Produto *ProdutoOrcado, int Quantidade, Date Data){
    this->ProdutoOrcado = *ProdutoOrcado;
    this->Quantidade = Quantidade;
    this->Data = Data;
    this->ValorTotal = (Quantidade * ProdutoOrcado->GetValor().GetValor());
}

int Orcamento::GetQuantidade() {
    return this->Quantidade;
}

Date Orcamento::GetData() {
    return this->Data;
}

Produto Orcamento::GetProdutoOrcado(){
    return this->ProdutoOrcado;
}

float Orcamento::GetValorTotal(){
    return this->ValorTotal;
}

/*
void Orcamento::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Orcamento::SetData(Date Data) {
    this->Data = Data;
}
*/