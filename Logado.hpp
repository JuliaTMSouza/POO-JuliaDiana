#ifndef LOGADO_H
#define LOGADO_H

  #include <iostream>
  #include <stdbool.h>

  class Logado {
    private:
      static bool PessoaLogada; //n tem q ser tipo logado?

      Logado();
      

    public:
      bool GetLogado();
      
      //void SetLogado();
  };

#endif