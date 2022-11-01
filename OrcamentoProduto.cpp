#include "OrcamentoProduto.hpp"

using namespace std;

Produto OrcamentoProduto::GetProdutoOrcado() {
    return this->ProdutoOrcado;
}

void OrcamentoProduto::SetProdutoOrcado(Produto ProdutoOrcado) {
    this->ProdutoOrcado = ProdutoOrcado;
}