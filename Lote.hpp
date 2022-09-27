#ifndef LOTE_H
#define LOTE_H

  #include <string>

  using namespace std;

  class Lote {
    protected:
      int Quantidade;
      string DataProducao;
      int número;

    public:
      int GetQuantidade();
      string GetDataProducao();
      int GetNumero();
      void SetQuantidade(int Quantidade);
      void SetDataProducao(string DataProducao);
      void SetNumero(int Numero);
  };

#endif