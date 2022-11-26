#ifndef PERMISSAO_H
#define PERMISSAO_H

  #include <list>
  #include <string>

  using namespace std;

  class Permissao {
    protected:
      list<string> NaoPermitido;

    public:
      list<string> GetNaoPermitido();
      void SetNaoPermitido(string NaoPermitido);
      int VerificarPermissao(Permissao NaoPermitido, string NomeMetodo);
  };

#endif