#ifndef CLIENTE_H
#define CLIENTE_H

  #include "Pessoa.hpp"
  #include <string>

  using namespace std;

  class Cliente: public Pessoa{
    protected:
      string Telefone;

    public:
      string GetTelefone();
      void SetTelefone(string Telefone);
  };

#endif