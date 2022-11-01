#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

  #include <string>

  using namespace std;

  class Pagamentos {
    protected:
      string Tipo; //ENUM

    public:
      string GetTipo();
      void SetTipo(string Tipo);
  };

#endif