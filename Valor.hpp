#ifndef VALOR_H
#define VALOR_H

  #include <iostream>

  class Valor {
    protected:
      float ValorProduto;

    public:
      float GetValor();
      
      void SetValor(float ValorProduto);
  };

#endif