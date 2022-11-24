#ifndef VALOR_H
#define VALOR_H

 // #include <iostream>
  #include "Date.hpp"

  class Valor {
    protected:
      float ValorProduto;
      Date Data;

    public:
      Valor();
      Valor(float ValorProduto, Date Data);

      float GetValor();
      Date GetData();
      
      void SetValor(float ValorProduto);
      void SetData(Date Data);
  };

#endif