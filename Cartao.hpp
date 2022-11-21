#ifndef CARTAO_H
#define CARTAO_H

  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Cartao: public Pagamentos {
    protected:
      Date Validade;
      int NumeroCartao;
      string Nome;
      int Parcelas; //ENUM

    public:
      int GetNumeroCartao();
      Date GetValidade();
      string GetNome();
      int GetParcelas();

      void SetNumeroCartao(int NumeroCartao);
      void SetValidade(Date Validade);
      void SetNome(int Nome);
      void SetParcelas(int Parcelas);
  };

#endif