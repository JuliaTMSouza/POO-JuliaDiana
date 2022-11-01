#ifndef BOLETO_H
#define BOLETO_H

  #include "Pagamentos.hpp"
  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Boleto: public Pagamentos {
    protected:
      Date Vencimento;
      int Prazo; //ENUM
      string Nome;

      //CONFERE SE TEM MATERIA PRIMA ()

    public:
      int GetPrazo();
      Date GetVencimento();
      string GetNome();
      
      void SetPrazo(int Prazo);
      void SetVencimento(Date Vencimento);
      void SetNome(string Nome);
  };

#endif