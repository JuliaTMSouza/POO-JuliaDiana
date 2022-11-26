#ifndef PESSOA_H
#define PESSOA_H

  #include <string>
  #include "Permissao.hpp"

  using namespace std;

  class Pessoa {
    protected:
      string Nome;
      string CPF_CNPJ;
      string Email;
      Permissao *Permissoes;

      bool ValidarCPF_CNPJ(string CPF_CNPJ, bool Tipo);
      bool ValidaPessoa(string CPF_CNPJ, string Nome, bool Tipo);

    public:
      string GetNome();
      string GetCPF_CNPJ();
      string GetEmail();
      Permissao* GetPermissoes();

      void SetNome(string Nome);
      void SetCPF_CNPJ(string CPF_CNPJ, bool Tipo);
      void SetEmail(string Email);
      void SetPermissoes(Permissao *Permissoes);
  };

#endif