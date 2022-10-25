#ifndef PermissaoNegada_H
#define PermissaoNegada_H

  #include "Log.hpp"
  #include <string>

  using namespace std;

  class PermissaoNegada: public Leitura{
    protected:
      string Mensagem;

    public:
      string GetMensagem();
      void SetMensagem(string Mensagem);
      PermissaoNegada(Date, string, Pessoa, string, string);
  };

#endif