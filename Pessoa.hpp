#ifndef PESSOA_H
#define PESSOA_H

  #include <string>

  using namespace std;

  class Pessoa {
    protected:
      string Nome;
      string CPF_CNPJ;
      string Email;

      bool ValidarCPF_CNPJ(string CPF_CNPJ, bool Tipo);

    public:
      string GetNome();
      string GetCPF_CNPJ();
      string GetEmail();
      void SetNome(string Nome);
      void SetCPF_CNPJ(string CPF_CNPJ, bool Tipo);
      void SetEmail(string Email);
  };

#endif