#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

  #include "Pessoa.hpp"
  #include "Cargo.hpp"
  #include "Departamento.hpp"
  #include <string>

  using namespace std;

  class Funcionario: public Pessoa{
    protected:
      string Matricula;
      string Endereco;
      string Nascimento;
      Cargo *CargoAtual;
      Departamento *DepartamentoAtual;

    public:
      string GetMatricula();
      string GetEndereco();
      string GetNascimento();
      string GetCargoAtual();
      string GetDepartamentoAtual();
      void SetMatricula(string Matricula);
      void SetEndereco(string Endereco);
      void SetNascimento(string Nascimento);
      void SetCargoAtual(Cargo *CargoAtual);
      void SetDepartamentoAtual(Departamento *DepartamentoAtual);

      //Funcionario(/*string Nome, string CPF_CNPJ, string Email, string Matricula, string Endereco, string Nascimento*/);
  };

#endif