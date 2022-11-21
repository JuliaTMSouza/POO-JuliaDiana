#ifndef ESCRITA_H
#define ESCRITA_H

  #include "Log.hpp"
  #include <string>

  using namespace std;

  class Escrita: public Log{
    protected:
      string AtributoAnterior;
      string AtributoAtual;

    public:
      string GetAtributoAnterior();
      void SetAtributoAnterior(string AtributoAnterior);
      string GetAtributoAtual();
      void SetAtributoAtual(string AtributoAtual);
      Escrita(Date, string, Pessoa, string, string);
  };

#endif