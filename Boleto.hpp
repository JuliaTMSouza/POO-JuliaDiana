#ifndef ORCAMENTO_H
#define ORCAMENTO_H

  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Orcamento: public Pagamentos {
    protected:
      Date Vencimento;
      int Prazo; //ENUM
      string Nome;

    public:
      int GetPrazo();
      Date GetVencimento();
      string GetNome();
      void SetPrazo(int Prazo);
      void SetVencimento(Date Vencimento);
      void SetNome(string Nome);
  };

#endif