#include "Vendas.hpp"

using namespace std;


void Vendas::RealizarVenda(Produto ProdutoRequerido){
    string confirma = "";
    //ARRUMAR PARA PEGAR O LOTE ATUAL MAIS O LOTE ANTIGO... PRIMEIRO VER SE TÁ PEGANDO CERTO NÉ

    if(this->OrcamentoAtual.GetQuantidade() > this->DadosProduto.GetEstoqueAtual()){
        cout << "A quantidade requerida ultrapassa o estoque atual. Gostaria de realizar um novo orçamento? ('Confirmar' ou 'Recusar')" << endl;
        
        cin >> confirma;

        while(confirma != "Confirmar" || confirma != "Recusar"){
            cin >> confirma;
            cout << "Comando nao identificado. Confirmar? ('Confirmar' ou 'Recusar')" << endl;
        }

        if(confirma == "Confirmar") ProdutoRequerido.GetLote().SolicitarNovoLote();
        else if(confirma == "Recusar") cout << "Avisaremos quando o estoque for renovado. Continue acessando nossos produtos!" << endl;
    }
    else{
        if(&ProdutoRequerido.GetValor() != &OrcamentoAtual.GetProdutoOrcado().GetValor()){
            cout << "Informamos que o valor do produto foi atualizado desde seu Orçamento. O novo valor é R$"
                 << ProdutoRequerido.GetValor().GetValor()
                 << ", totalizando a compra em R$"
                 << ProdutoRequerido.GetValor().GetValor() * OrcamentoAtual.GetQuantidade()
                 << ".\n Deseja continuar? ('Confirmar' ou 'Recusar')";

            cin >> confirma;

            while(confirma != "Confirmar" || confirma != "Recusar"){
                cin >> confirma;
                cout << "Comando nao identificado. Confirmar? ('Confirmar' ou 'Recusar')" << endl;
            }
        }
        if(confirma == "Confirmar"){
            cout << "Compra confirmada. Agradecemos a preferência!" << endl;
            int novoEstoque = this->DadosProduto.GetEstoqueAtual() - this->OrcamentoAtual.GetQuantidade();
            this->DadosProduto.SetEstoqueAtual(novoEstoque);

            if(novoEstoque < DadosProduto.GetEstoqueMinimo()); //Pedir pra produzir mais
        }
    }

}

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

OrcamentoProduto Vendas::GetOrcamentoAtual(){
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

void Vendas::SetOrcamentoAtual(OrcamentoProduto OrcamentoAtual) {
    this->OrcamentoAtual = OrcamentoAtual;
}
