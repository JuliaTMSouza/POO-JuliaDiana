#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

  #include "Pessoa.hpp"
  #include <string>

  using namespace std;

  class Funcionario: public Pessoa{
    protected:
      string Matricula;
      string Endereco;
      string Nascimento;

    public:
      string GetMatricula();
      string GetEndereco();
      string GetNascimento();
      void SetMatricula(string Matricula);
      void SetEndereco(string Endereco);
      void SetNascimento(string Nascimento);

      //Funcionario(/*string Nome, string CPF_CNPJ, string Email, string Matricula, string Endereco, string Nascimento*/);
  };

#endif