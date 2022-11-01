#ifndef PRODUTO_H
#define PRODUTO_H

  #include <iostream>
  #include <string>

  #include "Categoria.hpp"
  #include "Lote.hpp"
  #include "Valor.hpp"
  #include "Producao.hpp"


  using namespace std;

  class Produto {
    private:
      static int CodigoAtual;
      static int LoteAtual;

    protected:
      string Nome;
      int LoteMinimo;
      int EstoqueAtual;
      int Codigo;
      Lote Lotes;
      Categoria CategoriaProduto;
      Valor ValorProduto;
      Producao MateriasPrima;
      int QtdMateriaPrima;

      void SetCodigoAtual();
      void SetLoteAtual();

    public:
      string GetNome();
      int GetLoteMinimo();
      int GetEstoqueAtual();
      int GetCodigo();
      int GetCodigoAtual();
      int GetLoteAtual();
      Lote GetLote();
      Categoria GetCategoria();
      Valor GetValor();
      Producao GetMateriasPrima();
      int GetQtdMateriaPrima();

      void SetNome(string Nome) {}
      void SetLoteMinimo(int LoteMinimo) {}
      void SetEstoqueAtual(int EstoqueAtual);
      void SetCodigo();
      void SetLote();
      void SetCategoria(Categoria CategoriaProduto);
      void SetValor(Valor ValorProduto);
      void SetMateriasPrima(Producao MateriasPrima);
      void SetQtdMateriaPrima(int QtdMateriaPrima);

  };

#endif