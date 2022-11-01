#ifndef ORCAMENTOMATERIAL_H
#define ORCAMENTOMATERIAL_H

  #include "MateriaPrima.hpp"

  using namespace std;

  class OrcamentoMaterial: public Orcamento{
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