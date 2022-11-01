#ifndef VENDAS_H
#define VENDAS_H

  #include <string>
  #include "Cliente.hpp"

  using namespace std;

  class Vendas {
    protected:
      int Quantidade;
      string Data;
      Cliente Cliente;
      Produto Produto;

    public:
      int GetQuantidade();
      Produto GetProduto();
      Cliente GetCliente();
      string GetData();
      void SetQuantidade(int Quantidade);
      void SetProduto(Produto Produto);
      void setCliente(Cliente Cliente);
      void setData(string Data);
  };

#endif