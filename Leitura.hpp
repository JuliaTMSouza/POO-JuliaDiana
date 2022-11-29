#ifndef LEITURA_H
#define LEITURA_H

  #include "Log.hpp"
  #include <string>

  using namespace std;

  class Leitura: public Log{
    protected:
      string InformacaoAcessada;

    public:
      string GetInformacaoAcessada();
      void SetInformacaoAcessada(string InformacaoAcessada);
      Leitura(Date, string, string, string);

  };

#endif