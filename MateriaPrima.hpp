#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H

  #include <string>
  #include <list>
  #include "Lote.hpp"
  #include "Date.hpp"

  using namespace std;

  class MateriaPrima {
    private:
      int LoteAtual;

    protected:
      string Nome;
      int EstoqueAtual = 0;
      int EstoqueMinimo;
      list<Lote> Lotes;
      float Medida;
      string UnidadeMedida;

      void SetLoteAtual();

    public:
      MateriaPrima();
      string GetNome();
      list<Lote> GetLotes();
      int GetEstoqueAtual();
      int GetEstoqueMinimo();
      int GetMedida();
      string GetUnidadeMedida();
      int GetLoteAtual();

      void SetNome(string Nome);
      void SetLotes(int Quantidade, Date DataProducao);
      void SetEstoqueAtual(int EstoqueAtual);
      void SetEstoqueMinimo(int EstoqueMinimo);
      void SetMedida(string Medida);

  };

#endif