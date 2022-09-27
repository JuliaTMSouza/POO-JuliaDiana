#ifndef CARGO_H
#define CARGO_H

  using namespace std;

  #include <string>
  #include <iostream>

  class Cargo {
    private:
      string Nome;
      string Escopo;

    public:
      string GetEscopo();
      string GetNome();
      
      void SetEscopo(string Escopo);
      void SetNome(string Nome);
  };

#endif