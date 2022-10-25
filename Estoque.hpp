#ifndef ESTOQUE_H
#define ESTOQUE_H

  #include <string>

  #include "Produto.hpp"

  using namespace std;

  class Estoque {
    protected:
      int Quantidade;
      Produto Produtos;

    public:
      int GetQuantidade();
      Produto GetProduto();
      void SetQuantidade(int Quantidade);
      void SetProduto(Produto Produtos);
  };

#endif