#ifndef LOG_H
#define LOG_H

  #include <string>
  #include "Date.hpp"

  using namespace std;

  class Log {
    protected:
      Date Data;
      string Entidade;
      string Nome;

    public:
      Date GetData();
      string GetEntidade();
      string GetNome();
      void SetData(Date Data);
      void SetEntidade(string Entidade);
      void SetNome(string Nome);
  };

#endif