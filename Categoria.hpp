#ifndef CATEGORIA_H
#define CATEGORIA_H

  #include <string>

  using namespace std;

  class Categoria {
    protected:
      string Nome;

    public:
      string GetNome();
      void SetNome(string Nome);
  };

#endif