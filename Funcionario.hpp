#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

  #include <string>
  
  #include "Pessoa.hpp"
  #include "Departamento.hpp"
  #include "Cargo.hpp"
  #include "Admissao.hpp"
  #include "Salario.hpp"
  #include "Permissao.hpp"
  #include "Date.hpp"

  using namespace std;

  class Funcionario: public Pessoa{
    protected:
      string Matricula;
      string Endereco;
      Date *Nascimento;
      Departamento *DepartamentoAtual;
      Cargo *CargoAtual;
      list<Admissao> AdmissaoDemissao; //Conferir se ainda é necessário
      list<Salario> Salarios; // Tem que manter fixo quando o membro for demitido, então talvez criar algum bool pra conferir
                            // se atualiza esse dado ou n

    public:
      string GetMatricula();
      string GetEndereco();
      Date* GetNascimento();
      Departamento* GetDepartamentoAtual();
      Cargo* GetCargoAtual();
      list<Admissao> GetAdmissaoDemissao();
      list<Salario> GetSalarios();


      void SetMatricula(string Matricula);
      void SetEndereco(string Endereco);
      void SetNascimento(Date *Nascimento);
      void SetDepartamentoAtual(Departamento *DepartamentoAtual);
      void SetCargoAtual(Cargo *CargoAtual);
      void SetAdmissaoDemissao(Admissao AdmissaoDemissao);
      void SetSalarios(Salario Salarios);
  };

#endif