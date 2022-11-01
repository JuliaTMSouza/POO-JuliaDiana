#ifndef ORCAMENTOPRODUTO_H
#define ORCAMENTOPRODUTO_H

  #include "Orcamento.hpp"
  #include "Produto.hpp"

  using namespace std;

  class OrcamentoProduto: public Orcamento{
    protected:
      Produto ProdutoOrcado;

    public:
      Produto GetProdutoOrcado();
      
      void SetProdutoOrcado(Produto ProdutoOrcado);
  };

#endif