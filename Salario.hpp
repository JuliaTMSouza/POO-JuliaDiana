#ifndef SALARIO_H
#define SALARIO_H

  #include <iostream>
  #include <string>

  using namespace std;

  class Salario {
    protected:
      float Valor;
      string DataSalario;
      string Descricao;

    public:
      float GetValor();
      string GetDataSalario();
      string GetDescricao();
      
      void SetValor(float Valor);
      void SetDataSalario(string DataSalario) {}
      void SetDescricao(string Descricao);
  };

#endif