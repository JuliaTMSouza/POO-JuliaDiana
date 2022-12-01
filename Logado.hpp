#ifndef LOGADO_H
#define LOGADO_H

  #include <iostream>
  #include <stdbool.h>
  #include "Permissao.hpp"
  #include "Leitura.hpp"
  #include "Escrita.hpp"
  #include "PermissaoNegada.hpp"

  class Logado {
    protected:
      Logado() = default;
      Permissao Permissoes;
      string Nome;
      list<Leitura> LogLeitura;
      list<Escrita> LogEscrita;
      list<PermissaoNegada> LogPermissaoNegada;

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
      list<Leitura> GetLogLeitura();
      list<Escrita> GetLogEscrita();
      list<PermissaoNegada> GetLogPermissaoNegada();
      void SetPermissoes(Permissao Permissoes);
      void SetNome(string Nome);
      void SetLogLeitura(Leitura Logs);
      void SetLogEscrita(Escrita Logs);
      void SetLogPermissaoNegada(PermissaoNegada Logs);
      int VerificarPermissaoLeitura(string Classe, string NomeMetodo);
      int VerificarPermissaoEscrita(string Classe, string NomeMetodo, string InformacaoAtual, string InformacaoAnterior);
  };

#endif