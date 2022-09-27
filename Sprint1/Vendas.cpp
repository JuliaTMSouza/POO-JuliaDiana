#include "Vendas.hpp"

using namespace std;

int Vendas::GetQuantidade() {
    return this->Quantidade;
}

string Vendas::GetData() {
    return this->Data;
}

Cliente Vendas::GetCliente() {
    return this->Cliente;
}

Produto Vendas::GetProduto() {
    return this->Produto;
}

void Vendas::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Vendas::SetProduto(Produto Produto) {
    this->Produto = Produto;
}

void Vendas::SetCliente(Cliente Cliente) {
    this->Cliente = Cliente;
}

void Vendas::SetData(string Data) {
    this->Data = Data;
}