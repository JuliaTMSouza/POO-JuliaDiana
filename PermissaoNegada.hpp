#ifndef PermissaoNegada_H
#define PermissaoNegada_H

  #include "Log.hpp"
  #include <string>

  using namespace std;

  class PermissaoNegada: public Log{
    protected:
    protected:
      string InformacaoAcessada;
      string Mensagem;
    public:
      string GetInformacaoAcessada();
      string GetMensagem();
      void SetInformacaoAcessada(string InformacaoAcessada);
      void SetMensagem(string Mensagem);
      PermissaoNegada(Date, string, string, string, string);
  };

#endif