#ifndef LOTE_H
#define LOTE_H

  #include "Date.hpp"
  #include "Produto.hpp"

  using namespace std;

  class Lote {
    protected:
      int Quantidade;
      Date DataProducao;
      int Numero;

    public:
      Lote(int Quantidade, Date DataProducao, int Numero);

      int GetQuantidade();
      Date GetDataProducao();
      int GetNumero();
/*
      void SetQuantidade(int Quantidade);
      void SetDataProducao(Date DataProducao);
      void SetNumero(Produto DefineProduto);
*/
      void SolicitarNovoLote(); //ACHO Q N PRECISA MAIS DISSO TB
  };

#endif