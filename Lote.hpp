#ifndef LOTE_H
#define LOTE_H

  #include "Date.hpp"

  using namespace std;

  class Lote {
    protected:
      int Quantidade;
      Date DataProducao;
      int NumeroLote;
      float ValorDeCompra;

    public:
      Lote();
      Lote(int Quantidade, Date DataProducao, int NumeroLote, float ValorDeCompra);

      int GetQuantidade();
      Date GetDataProducao();
      int GetNumeroLote();
      float GetValorDeCompra();

};

#endif