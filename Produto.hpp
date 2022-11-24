#ifndef PRODUTO_H
#define PRODUTO_H

  #include <iostream>
  #include <string>
  #include <list>

  #include "Categoria.hpp"
  #include "Lote.hpp"
  #include "Valor.hpp"
  #include "MateriaPrima.hpp"
  #include "Fornecedor.hpp"
  #include "Date.hpp"

  using namespace std;

  class Produto {
    private:
      static int CodigoAtual;
      int LoteAtual = 0;

    protected:
      string NomeProduto;
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
      Produto(int cria);
      void SolicitarNovoLote(int Quantidade, Date Data); //CRIAR
      void SolicitarMateriais(int Quantidade, Date Data); //CRIAR
      
      string GetNomeProduto();
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

      void SetNomeProduto(string NomeProduto);
      void SetLoteMinimo(int LoteMinimo);
      void SetEstoqueAtual(int EstoqueAtual);
      void SetEstoqueMinimo(int EstoqueMinimo);
      void SetLote(int Quantidade, Date Data, float ValorDeCompra);
      void SetCategoria(Categoria CategoriaProduto);
      void SetValor(Valor ValorProduto);
      void SetMateriasPrima(MateriaPrima MateriasPrima);

  };
  

#endif