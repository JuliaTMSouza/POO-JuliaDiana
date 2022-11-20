#ifndef PRODUTO_H
#define PRODUTO_H

  #include <iostream>
  #include <string>
  #include <list>

  #include "Categoria.hpp"
  #include "Lote.hpp"
  #include "Valor.hpp"
  #include "Producao.hpp"
  #include "MateriaPrima.hpp"
  #include "Fornecedor.hpp"

  using namespace std;

  class Produto {
    private:
      static int CodigoAtual;
      static int LoteAtual;

    protected:
      string Nome;
      int LoteMinimo;
      int EstoqueAtual = 0;
      int EstoqueMinimo;
      int Codigo;
      list <Lote> Lotes;
      Categoria CategoriaProduto;
      list <Valor> ValorProduto;
      list <MateriaPrima> MateriasPrima;
      int QtdMateriaPrima;
      list <Fornecedor> Fornecedores;

      void SetCodigoAtual();
      void SetLoteAtual();
 
    public:

      Produto();
      void SolicitarNovoLote(int Quantidade); //CRIAR
      void SolicitarMateriais(int Quantidade); //CRIAR
      
      string GetNome();
      int GetLoteMinimo();
      int GetEstoqueAtual();
      int GetEstoqueMinimo();
      int GetCodigo();
      int GetCodigoAtual();
      int GetLoteAtual();
      Lote GetLote();
      Categoria GetCategoria();
      Valor GetValor();
      list <MateriaPrima> GetMateriasPrima();
      //int GetQtdMateriaPrima();

      void SetNome(string Nome);
      void SetLoteMinimo(int LoteMinimo);
      void SetEstoqueAtual(int EstoqueAtual);
      void SetEstoqueMinimo(int EstoqueMinimo);
      //void SetCodigo();
      void SetLote();
      void SetCategoria(Categoria CategoriaProduto);
      void SetValor(Valor ValorProduto);
      void SetMateriasPrima(MateriaPrima MateriasPrima);
      //void SetQtdMateriaPrima(int QtdMateriaPrima);

  };

#endif