#ifndef ENDERECO_H
#define ENDERECO_H

  using namespace std;

  #include <string>

  class Endereco {

    protected:
      string Pais;
      string Cidade;
      string Estado;
      string Rua;
      int Numero
      int Complemento;

    public:
      string GetPais();
      string GetCidade();
      string GetEstado();
      string GetRua();
      int GetNumero();
      int GetComplemento();
      
      void SetPais(string Pais);
      void SetCidade(string Cidadde);
      void SetEstado(string Estado);
      void SetRua(string Rua);
      void SetNumero(string Numero);
      void SetComplemento(string Complemento);
  };

#endif