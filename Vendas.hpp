#ifndef VENDAS_H
#define VENDAS_H

  #include <string>
  #include "Cliente.hpp"
  #include "Date.hpp"
  #include "Produto.hpp"
  #include "Pagamentos.hpp"
  #include "OrcamentoProduto.hpp"
  #include "Lote.hpp"

  using namespace std;

  class Vendas {
    protected:
      int Quantidade;
      Date Data;
      Cliente DadosCliente;
      Produto DadosProduto;
      Lote LotePeriodoVenda;
      Pagamentos TipoPagamento;
      OrcamentoProduto OrcamentoAtual;

      //void ValidaOrcamento();

    public:

      int GetQuantidade();
      Produto GetDadosProduto();
      Lote GetLotePeriodoVenda();
      Cliente GetDadosCliente();
      Date GetData();
      Pagamentos GetTipoPagamento();
      OrcamentoProduto GetOrcamentoAtual();

      void SetQuantidade(int Quantidade);
      void SetDadosProduto(Produto DadosProduto);
      void SetLotePeriodoVenda(Lote LotePeriodoVenda);
      void SetDadosCliente(Cliente DadosCliente);
      void SetData(Date Data);
      void SetTipoPagamento(Pagamentos TipoPagamento);
      void SetOrcamentoAtual(OrcamentoProduto OrcamentoAtual);

      //void RealizarVenda(Produto ProdutoRequerido); //Considerar colocar o orçamento aqui, ao invés do produto... dentro do orçamento já tem o prod.
      void RealizarVenda();
        //REALIZARVENDA CHAMA VALIDAORCAMENTO
      
  };

#endif