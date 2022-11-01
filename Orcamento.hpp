#ifndef ORCAMENTO_H
#define ORCAMENTO_H

  #include "Date.hpp"

  using namespace std;

  class Orcamento {
    protected:
      Date Data;
      int Quantidade;

    public:
      int GetQuantidade();
      Date GetData();
      
      void SetQuantidade(int Quantidade);
      void SetData(Date Data);
  };

#endif