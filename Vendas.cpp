#include "Vendas.hpp"

using namespace std;

int Vendas::GetQuantidade() {
    return this->Quantidade;
}

Date Vendas::GetData() {
    return this->Data;
}

Cliente Vendas::GetCliente() {
    return this->Cliente;
}

Produto Vendas::GetProduto() {
    return this->Produto;
}

Pagamento GetTipoPagamento(){
    return this->TipoPagamento;
}

Orcamento GetOrcamentoAtual(){
    return this->OrcamentoAtual;
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

void Vendas::SetData(Date Data) {
    this->Data = Data;
}

void Vendas::SetTipoPagamento(Pagamento TipoPagamento) {
    this->TipoPagamento = TipoPagamento;
}

void Vendas::SetOrcamentoAtual(Orcamento OrcamentoAtual) {
    this->OrcamentoAtual = OrcamentoAtual;
}
