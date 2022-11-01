#ifndef VENDAS_H
#define VENDAS_H

  #include <string>
  #include "Cliente.hpp"
 // #include "Date.hpp"
  #include "Produto.hpp"
  #include "Pagamento.hpp"
  #include "Orcamento.hpp"

  using namespace std;

  class Vendas {
    protected:
      int Quantidade;
      Date Data;
      Cliente DadosCliente;
      Produto DadosProduto;
      Pagamento TipoPagamento;
      Orcamento OrcamentoAtual;

      //void ValidaOrcamento();

    public:
      int GetQuantidade();
      Produto GetDadosProduto();
      Cliente GetDadosCliente();
      Date GetData();
      Pagamento GetTipoPagamento();
      Orcamento GetOrcamentoAtual();

      void SetQuantidade(int Quantidade);
      void SetDadosProduto(Produto DadosProduto);
      void SetDadosCliente(Cliente DadosCliente);
      void SetData(Date Data);
      void SetTipoPagamento(Pagamento TipoPagamento);
      void SetOrcamentoAtual(Orcamento OrcamentoAtual);

      //void RealizarVenda();
        //REALIZARVENDA CHAMA VALIDAORCAMENTO
      
  };

#endif