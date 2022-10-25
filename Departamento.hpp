#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

  using namespace std;

  #include <string>
  #include "Cargo.hpp"

  class Departamento {

    protected:
      string Nome;
      string Descricao;
      Cargo Cargos;

    public:
      string GetDescricao();
      string GetNome();
      Cargo GetCargos();
      void SetDescricao(string Descricao);
      void SetNome(string Nome);
      void SetCargos(Cargo Cargos);
  };

#endif