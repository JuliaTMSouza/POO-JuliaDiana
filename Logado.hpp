#ifndef LOGADO_H
#define LOGADO_H

  #include <iostream>
  #include <stdbool.h>

  class Logado {
    protected:
      Logado() = default;
      

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
  };

#endif