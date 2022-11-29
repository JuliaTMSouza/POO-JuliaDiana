#ifndef FORNECEDOR_H
#define FORNECEDOR_H

  #include <list>
  #include <string>

  #include "Pessoa.hpp"
  #include "MateriaPrima.hpp"
  #include "Valor.hpp"

  using namespace std;

  class Fornecedor : public Pessoa{
    protected:
      list<MateriaPrima> MateriasPrima;
      list<Valor> PrecoMateriais;

    public:
      float RequerirOrcamento(string MateriasPrima, float Quantidade);
      void AtualizaPrecoMateriais(/*MateriaPrima MateriasPrima, Valor PrecoMateriais*/ Date Data);
      
      list<MateriaPrima> GetMateriasPrima();
      list<Valor> GetPrecoMateriais();
      
      void SetMateriasPrima(MateriaPrima MateriasPrima, Valor PrecoMateriais);
      
  };

#endif