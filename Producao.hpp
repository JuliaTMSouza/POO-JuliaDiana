#ifndef PRODUCAO_H
#define PRODUCAO_H

  #include MateriaPrima.hpp

  using namespace std;

  class Producao{
    protected:
      int QuantidadeNecessaria;
      MateriaPrima MateriasPrimas;

    public:
      int GetQuantidadeNecessaria();
      MateriaPrima GetMateriasPrimas();
      
      void SetQuantidadeNecessaria(int QuantidadeNecessaria);
      void SetMateriasPrimas(MateriaPrima MateriasPrimas);
  };

#endif