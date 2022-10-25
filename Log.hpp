#ifndef LOG_H
#define LOG_H

  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Log {
    protected:
      Date Data;
      string Entidade;
      Pessoa usuario;

    public:
      Date GetData();
      string GetEntidade();
      Pessoa GetUsuario();
      void SetData(Date Data);
      void SetEntidade(string Entidade);
      void SetUsuario(Pessoa Usuario);
  };

#endif