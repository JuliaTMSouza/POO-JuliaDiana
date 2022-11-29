#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H

  #include <string>
  #include <string.h>
  #include <list>
  #include <iostream>
  #include "Lote.hpp"
  #include "Date.hpp"
  //#include "Orcamento.hpp"

  using namespace std;

  class MateriaPrima {
    private:
      int LoteAtual;

    protected:
      string Nome;
      float EstoqueAtual = 0;
      float EstoqueMinimo;
      list<Lote> Lotes;
      float Medida;
      string UnidadeMedida;

      void SetLoteAtual();

    public:
      MateriaPrima();
      string GetNome();
      list<Lote> GetLotes();
      float GetEstoqueAtual();
      float GetEstoqueMinimo();
      float GetMedida();
      string GetUnidadeMedida();
      int GetLoteAtual();

      void SetNome(string Nome);
      void SetLotes(int Quantidade, Date DataProducao, float ValorDeCompra);
      void SetEstoqueAtual(int EstoqueAtual);
      void SetEstoqueMinimo(string EstoqueMinimo);
      void SetMedida(string Medida);

  };

#endif