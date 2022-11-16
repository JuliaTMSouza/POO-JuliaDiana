#include "OrcamentoProduto.hpp"

using namespace std;

OrcamentoProduto::OrcamentoProduto(Produto ProdutoOrcado, int Quantidade, Date Data){
    if(Quantidade > ProdutoOrcado.GetLote().GetQuantidade()){
        cout << "Estoque insuficiente. Total permitido a ser comprado: " << ProdutoOrcado.GetLote().GetQuantidade();
    }
    else{
        string confirma = "";
        this->ProdutoOrcado = ProdutoOrcado;
        this->Quantidade = Quantidade;
        this->Data = Data;
        this->ValorTotal = (Quantidade * ProdutoOrcado.GetValor().GetValor());
    }
}

Produto OrcamentoProduto::GetProdutoOrcado() {
    return this->ProdutoOrcado;
}
/*
void OrcamentoProduto::SetProdutoOrcado(Produto ProdutoOrcado) {
    this->ProdutoOrcado = ProdutoOrcado;
}
*/