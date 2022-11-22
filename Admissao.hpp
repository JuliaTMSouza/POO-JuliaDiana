#ifndef ADMISSAO_H
#define ADMISSAO_H

  #include <iostream>
  #include "Date.hpp"

  using namespace std;

  class Admissao {
    protected:
      Date DataAdmissao;
      Date DataDemissao;

    public:
      Date GetDataAdmissao();
      Date GetDataDemissao();

      void SetDataAdmissao(Date DataAdmissao);

    private:
      void SetDataDemissao(Date DataDemissao);
  };

#endif