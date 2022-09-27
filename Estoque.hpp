#ifndef ESTOQUE_H
#define ESTOQUE_H

  #include <string>

  using namespace std;

  class Estoque {
    protected:
      int Quantidade;
      Produto Produto;

    public:
      int GetQuantidade();
      Produto GetProduto();
      void SetQuantidade(int Quantidade);
      void SetProduto(Produto Produto);
  };

#endif