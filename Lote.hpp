#ifndef LOTE_H
#define LOTE_H

  #include "Date.hpp"

  using namespace std;

  class Lote {
    protected:
      int Quantidade;
      Date DataProducao;
      int Numero;

    public:
      int GetQuantidade();
      Date GetDataProducao();
      int GetNumero();

      void SetQuantidade(int Quantidade);
      void SetDataProducao(Date DataProducao);
      void SetNumero(int Numero);

      void SolicitarNovoLote();
  };

#endif