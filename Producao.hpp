#ifndef PRODUCAO_H
#define PRODUCAO_H

  #include "MateriaPrima.hpp"

  using namespace std;

  class Producao{
    protected:
      //int QuantidadeNecessaria;
      int EstoqueMinimo;
      list<MateriaPrima> MateriasPrimas;

    public:
      //int GetQuantidadeNecessaria();
      int GetEstoqueMinimo();
      list<MateriaPrima> GetMateriasPrimas();
      
      //void SetQuantidadeNecessaria(string QuantidadeNecessaria);
      void SetEstoqueMinimo(string EstoqueMinimo);
      void SetMateriasPrimas(MateriaPrima MateriasPrimas);
  };

#endif