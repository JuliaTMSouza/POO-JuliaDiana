#ifndef LOTE_H
#define LOTE_H

  #include "Date.hpp"

  using namespace std;

  class Lote {
    protected:
      int Quantidade;
      Date DataProducao;
      int NumeroLote;

    public:
      Lote();
      Lote(int Quantidade, Date DataProducao, int NumeroLote);

      int GetQuantidade();
      Date GetDataProducao();
      int GetNumeroLote();
/*
      void SetQuantidade(int Quantidade);
      void SetDataProducao(Date DataProducao);
      void SetNumeroLote(Produto DefineProduto);
*/
};

#endif