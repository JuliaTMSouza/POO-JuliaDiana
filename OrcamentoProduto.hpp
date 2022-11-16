#ifndef ORCAMENTOPRODUTO_H
#define ORCAMENTOPRODUTO_H


  #include "Orcamento.hpp"
  #include "Produto.hpp"
  #include "Valor.hpp"
  #include "Date.hpp"
  #include "Vendas.hpp"

  using namespace std;

  class OrcamentoProduto: public Orcamento{
    protected:
      Produto ProdutoOrcado;
      float ValorTotal;
      Vendas novaVenda; 

    public:
      OrcamentoProduto(Produto ProdutoOrcado, int Quantidade, Date Data);

      Produto GetProdutoOrcado();
      
     // void SetProdutoOrcado(Produto ProdutoOrcado);
  };

#endif