#include "Estoque.hpp"

using namespace std;

int Estoque::GetQuantidade() {
    return this->Quantidade;
}

Produto Estoque::GetProduto() {
    return this->Produto;
}

void Estoque::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Estoque::SetProduto(Produto Produto) {
    this->Produto = Produto;
}