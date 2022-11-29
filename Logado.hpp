#ifndef LOGADO_H
#define LOGADO_H

  #include <iostream>
  #include <stdbool.h>
  #include "Permissao.hpp"

  class Logado {
    protected:
      Logado() = default;
      Permissao Permissoes;
      string Nome;

    public:
      
      static Logado& getInstancia()
      {
        static Logado PessoaLogada;
        return PessoaLogada;
      };

      Logado(const Logado&) = delete;
      Logado(Logado&&) = delete;
      Logado& operator=(const Logado&) = delete;
      Logado& operator=(Logado&&) = delete;

      Permissao GetPermissoes();
      string GetNome();
      void SetPermissoes(Permissao Permissoes);
      void SetNome(string Nome);
      int VerificarPermissao(string NomeMetodo);
  };

#endif