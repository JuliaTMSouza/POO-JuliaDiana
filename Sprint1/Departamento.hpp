#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

  using namespace std;

  #include <string>
  class Departamento {

    protected:
      string Nome;
      string Descricao;

    public:
      string GetDescricao();
      string GetNome();
      void SetDescricao(string Descricao);
      void SetNome(string Nome);
  };

#endif