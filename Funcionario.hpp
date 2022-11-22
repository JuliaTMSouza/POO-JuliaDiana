#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

  #include <string>
  #include "Pessoa.hpp"
  #include "Departamento.hpp"
  #include "Cargo.hpp"
  #include "Admissao.hpp"
  #include "Salario.hpp"

  using namespace std;

  class Funcionario: public Pessoa{
    protected:
      string Matricula;
      string Endereco;
      string Nascimento;
      Departamento DepartamentoAtual;
      Cargo CargoAtual;
      // Admissao AdmissaoDemissao; //Conferir se ainda é necessário
      // Salario SalarioAtual; // Tem que manter fixo quando o membro for demitido, então talvez criar algum bool pra conferir
                            // se atualiza esse dado ou n

    public:
      string GetMatricula();
      string GetEndereco();
      string GetNascimento();
      string GetDepartamentoAtual();
      string GetCargoAtual();
      // Admissao GetAdmissaoDemissao();

      void SetMatricula(string Matricula);
      void SetEndereco(string Endereco);
      void SetNascimento(string Nascimento);
      void SetDepartamentoAtual(Departamento DepartamentoAtual);
      void SetCargoAtual(Cargo CargoAtual);
      // void SetAdmissaoDemissao(Admissao AdmissaoDemissao);

      //Funcionario(/*string Nome, string CPF_CNPJ, string Email, string Matricula, string Endereco, string Nascimento*/);
  };

#endif