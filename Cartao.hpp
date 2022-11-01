#ifndef CARTAO_H
#define CARTAO_H

  #include <iostream>
  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Cartao: public Pagamentos {
    protected:
      Date Validade;
      int NumeroCartao;
      string Nome;
      int Parcelas; //ENUM

      //CRIEI ESSA FUNÇÃO
      bool Validacao(int NumeroCartao);
      //

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