#ifndef VEICULO_H
#define VEICULO_H

  #include <string>
  #include <list>
  /*#include "Funcionario.hpp"*/
  #include "Rota.hpp"

  using namespace std;

  class Veiculo {
    protected:
      list<Rota> Rotas;
      /*Funcionario Motoristas;*/
      int Placa;
      string Tipo;

    public:
      
      int GetPlaca();
      /*Funcionario GetMotoristas();*/
      list<Rota> GetRotas();
      string GetTipo();

      void SetPlaca(int Placa);
      /*void SetMotoristas(Funcionario Motoristas);*/
      void SetRotas(Rota Rotas);
      void SetTipo(string Tipo);

  };

#endif