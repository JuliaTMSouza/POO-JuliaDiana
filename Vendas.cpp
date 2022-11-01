#include "Vendas.hpp"

using namespace std;

int Vendas::GetQuantidade() {
    return this->Quantidade;
}

Date Vendas::GetData() {
    return this->Data;
}

Cliente Vendas::GetDadosCliente() {
    return this->DadosCliente;
}

Produto Vendas::GetDadosProduto() {
    return this->DadosProduto;
}

Pagamentos Vendas::GetTipoPagamento(){
    return this->TipoPagamento;
}

Orcamento Vendas::GetOrcamentoAtual(){
    return this->OrcamentoAtual;
}

void Vendas::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Vendas::SetDadosProduto(Produto DadosProduto) {
    this->DadosProduto = DadosProduto;
}

void Vendas::SetDadosCliente(Cliente DadosCliente) {
    this->DadosCliente = DadosCliente;
}

void Vendas::SetData(Date Data) {
    this->Data = Data;
}

void Vendas::SetTipoPagamento(Pagamentos TipoPagamento) {
    this->TipoPagamento = TipoPagamento;
}

void Vendas::SetOrcamentoAtual(Orcamento OrcamentoAtual) {
    this->OrcamentoAtual = OrcamentoAtual;
}
