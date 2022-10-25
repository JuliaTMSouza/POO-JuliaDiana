#ifndef LEITURA_H
#define LEITURA_H

  #include "Log.hpp"
  #include <string>

  using namespace std;

  class Leitura: public Log{
    protected:
      string InformacaoAcessada;

    public:
      string GetInformacAoacessada();
      void SetInformacaoAcessada(string InformacaoAcessada);
  };

#endif