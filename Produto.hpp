#ifndef PRODUTO_H
#define PRODUTO_H

  #include <iostream>
  #include <string>

 /*
  #include "Categoria.h"
  #include "Lotes.h"
*/

  using namespace std;

  class Produto {
    private:
      static int CodigoAtual;
      static int LoteAtual;

    protected:
      float Valor;
      string Nome;
      int LoteMinimo;
      int EstoqueMinimo;
      int Codigo;
      /*
      Lotes Lote;
      Categorias Categoria;
      */

    public:
      float GetValor();
      string GetNome();
      string GetDescricao();
      int GetLoteMinimo();
      int GetEstoqueMinimo();
      int GetCodigo();
      int GetCodigoAtual();
      int GetLoteAtual();

      void SetValor(float Valor);
      void SetNome(string Nome) {}
      void SetDescricao(string Descricao);
      void SetLoteMinimo(int LoteMinimo) {}
      void SetEstoqueMinimo(int EstoqueMinimo);
      void SetCodigo();
      void SetCodigoAtual();
      void SetLoteAtual();
  };

#endif