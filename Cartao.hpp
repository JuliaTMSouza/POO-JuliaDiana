#ifndef CARTAO_H
#define CARTAO_H

  #include <iostream>
  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Cartao: public Pagamentos {
    protected:
      Date Validade;
      char NumeroCartao[16];
      string Nome;
      int Parcelas;

      bool Validacao(char NumeroCartao[16]);

    public:
      string GetNumeroCartao();
      Date GetValidade();
      string GetNome();
      int GetParcelas();

      void SetNumeroCartao(char NumeroCartao[16]);
      void SetValidade(Date Validade);
      void SetNome(string Nome);
      void SetParcelas(int Parcelas);
  };

#endif