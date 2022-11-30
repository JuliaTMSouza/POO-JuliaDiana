#ifndef PermissaoNegada_H
#define PermissaoNegada_H

  #include "Leitura.hpp"
  #include <string>

  using namespace std;

  class PermissaoNegada: public Leitura{
    protected:
      string Mensagem;

    public:
      string GetMensagem();
      void SetMensagem(string Mensagem);
      //Logado(Logado&&) = delete;
      //PermissaoNegada(Date, string, string, string, string);
  };

#endif