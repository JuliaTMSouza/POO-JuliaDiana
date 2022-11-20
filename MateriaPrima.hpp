#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H

  #include <string>
  #include <list>
  #include "Lote.hpp"

  using namespace std;

  class MateriaPrima {
    private:
      static int LoteAtual;

    protected:
      string Nome;
      int EstoqueAtual = 0;
      int EstoqueMinimo;
      list<Lote> LoteAtual;
      float Medida;
      string UnidadeMedida;
      
      void SetLoteAtual(Lote LoteAtual);

    public:
      string GetNome();
      Lote GetLoteAtual();
      int GetEstoqueAtual();
      int GetEstoqueMinimo();
      int GetMedida();
      string GetUnidadeMedida();

      void SetNome(string Nome);
      void SetEstoqueAtual(int EstoqueAtual);
      void SetEstoqueMinimo(int EstoqueMinimo);
      void SetMedida(string Medida);

  };

#endif