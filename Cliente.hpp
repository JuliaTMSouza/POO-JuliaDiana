#ifndef CLIENTE_H
#define CLIENTE_H

  #include <string>
  #include "Pessoa.hpp"
  #include "Orcamento.hpp"

  using namespace std;

  class Cliente: public Pessoa{
    protected:
      string Telefone;
      Orcamento OrcamentoAtual;
      //teoricamente deveria ter um tipo

    public:
      string GetTelefone();
      Orcamento GetOrcamentoAtual();

      void SetTelefone(string Telefone);
      void SetOrcamentoAtual(Orcamento OrcamentoAtual);
  };

#endif