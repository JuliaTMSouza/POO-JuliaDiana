#ifndef BOLETO_H
#define BOLETO_H

  
  #include <string>
  #include <iostream>

  #include "Pagamentos.hpp"
  #include "Date.hpp"

  using namespace std;

  class Boleto: public Pagamentos {
    protected:
      Date Vencimento;
      int Prazo;
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