#ifndef LOGADO_H
#define LOGADO_H

  #include <iostream>
  #include <stdbool.h>

  class Logado {
    private:
      static bool PessoaLogada;

      Logado();
      

    public:
      bool GetLogado();
      
      //void SetLogado();
  };

#endif