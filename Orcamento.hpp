#ifndef ORCAMENTO_H
#define ORCAMENTO_H

  #include "Date.hpp"
  //#include "Produto.hpp"

  using namespace std;

  class Orcamento {
    protected:
      Date Data;
      int Quantidade;
      //Produto Produtos;

    public:
      int GetQuantidade();
      Date GetData();
      //Produto GetProdutos();
      void SetQuantidade(int Quantidade);
      void SetData(Date Data);
      //void SetProdutos(int Produtos);
  };

#endif