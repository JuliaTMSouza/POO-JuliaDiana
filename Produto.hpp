#ifndef PRODUTO_H
#define PRODUTO_H

  #include <iostream>
  #include <string>

  #include "Categoria.hpp"
  #include "Lote.hpp"
  #include "Valor.hpp"


  using namespace std;

  class Produto {
    private:
      static int CodigoAtual;
      static int LoteAtual;

    protected:
      string Nome;
      int LoteMinimo;
      int EstoqueMinimo;
      int Codigo;
      Lote Lotes;
      Categoria CategoriaProduto;
      Valor ValorProduto;

      void SetCodigoAtual();
      void SetLoteAtual();

    public:
      string GetNome();
      int GetLoteMinimo();
      int GetEstoqueMinimo();
      int GetCodigo();
      int GetCodigoAtual();
      int GetLoteAtual();
      Lote GetLote();
      Categoria GetCategoria();
      Valor GetValor();

      void SetNome(string Nome) {}
      void SetLoteMinimo(int LoteMinimo) {}
      void SetEstoqueMinimo(int EstoqueMinimo);
      void SetCodigo();
      void SetLote();
      void SetCategoria(Categoria CategoriaProduto);
      void SetValor(Valor ValorProduto);

  };

#endif