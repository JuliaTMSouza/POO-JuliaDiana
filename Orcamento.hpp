#ifndef ORCAMENTO_H
#define ORCAMENTO_H

  #include "Date.hpp"
  #include "Produto.hpp"
  #include "Valor.hpp"

  using namespace std;

  class Orcamento {
    protected:
      Date Data;
      int Quantidade;
      Produto ProdutoOrcado;
      float ValorTotal;

    public:
      Orcamento();
      Orcamento(Produto ProdutoOrcado, int Quantidade, Date Data);

      int GetQuantidade();
      Date GetData();
      Produto GetProdutoOrcado();
      float GetValorTotal();
      
  };

#endif