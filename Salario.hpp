#ifndef SALARIO_H
#define SALARIO_H

  #include <iostream>
  #include <string>
  #include "Date.hpp"
  #include "Dissidio.hpp"

  using namespace std;

  class Salario {
    protected:
      float Valor;
      Date DataSalario;
      string Descricao;

    public:
      Salario();
      void Promocao(Dissidio NovaPromocao);

      float GetValor();
      Date GetDataSalario();
      string GetDescricao();
      
      void SetValor(float Valor);
      void SetDataSalario(Date DataSalario) {}
      void SetDescricao(string Descricao);
  };

#endif