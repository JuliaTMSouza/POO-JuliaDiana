#ifndef CARTAO_H
#define CARTAO_H

  #include <iostream>
  #include <string>

  #include "Pagamentos.hpp"
  #include "Date.hpp"

  using namespace std;

  class Cartao: public Pagamentos {
    protected:
      Date Validade;
      string NumeroCartao;
      string Nome;
      int Parcelas;

      bool Validacao(char NumeroCartao[16]);

    public:
      string GetNumeroCartao();
      Date GetValidade();
      string GetNome();
      int GetParcelas();

      void SetNumeroCartao(string NumeroCartao);
      void SetValidade(Date Validade);
      void SetNome(string Nome);
      void SetParcelas(int Parcelas);
  };

#endif