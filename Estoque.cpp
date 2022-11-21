#include "Estoque.hpp"

using namespace std;

int Estoque::GetQuantidade() {
    return this->Quantidade;
}

Produto Estoque::GetProduto() {
    return this->Produtos;
}

void Estoque::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Estoque::SetProduto(Produto Produtos) {
    this->Produtos = Produtos;
}