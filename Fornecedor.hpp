#ifndef FORNECEDOR_H
#define FORNECEDOR_H

  #include "Pessoa.hpp"
  #include "MateriaPrima.hpp"

  using namespace std;

  class Fornecedor : public Pessoa{
    protected:
      MateriaPrima MateriasPrima;

    public:
      MateriaPrima GetMateriasPrima();
      
      void SetMateriasPrima(MateriaPrima MateriasPrima);
  };

#endif