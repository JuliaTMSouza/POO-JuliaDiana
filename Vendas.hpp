#ifndef VENDAS_H
#define VENDAS_H

  #include <string>
  #include "Cliente.hpp"
  #include "Date.hpp"
  #include "Produto.hpp"
  #include "Pagamento.hpp"
  #include "Orcamento.hpp"

  using namespace std;

  class Vendas {
    protected:
      int Quantidade;
      Date Data;
      Cliente Cliente;
      Produto Produto;
      Pagamento TipoPagamento;
      Orcamento OrcamentoAtual;

    public:
      int GetQuantidade();
      Produto GetProduto();
      Cliente GetCliente();
      Date GetData();
      Pagamento GetTipoPagamento();
      Orcamento GetOrcamentoAtual();

      void SetQuantidade(int Quantidade);
      void SetProduto(Produto Produto);
      void SetCliente(Cliente Cliente);
      void SetData(Date Data);
      void SetTipoPagamento(Pagamento TipoPagamento);
      void SetOrcamentoAtual(Orcamento OrcamentoAtual);
  };

#endif