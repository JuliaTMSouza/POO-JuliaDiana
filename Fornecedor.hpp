#ifndef FORNECEDOR_H
#define FORNECEDOR_H

  #include "Pessoa.hpp"
  #include "MateriaPrima.hpp"
  #include "Valor.hpp"

  using namespace std;

  class Fornecedor : public Pessoa{
    protected:
      list <MateriaPrima> MateriasPrima; //isso aqui deveria ser um list tb
      list <Valor> PrecoMateriais;

    public:
      Fornecedor();
      
      float RequerirOrcamento(string Material, int Quantidade); //montar a função q retorna o preço total q ficaria o produto

      list <MateriaPrima> GetMateriasPrima();
      list <Valor> GetPrecoMateriais();
      
      void SetMateriasPrima(list <MateriaPrima> MateriasPrima);
      void SetPrecoMateriais(list <Valor> PrecoMateriais);
  };

#endif