#ifndef PAGAMENTO_H
#define PAGAMENTO_H

  #include <string>

  using namespace std;

  class Pagamento {
    protected:
      string Tipo; //ENUM

    public:
      string GetTipo();
      void SetTipo(string Tipo);
  };

#endif