#ifndef ADIMISSAO_H
#define ADIMISSAO_H

  #include <iostream>
  #include "Date.hpp"

  using namespace std;

  class Admissao {
    protected:
      Date DataAdmissao;
      Date DataDemissao;

    public:
      Admissao(Date DataAdmissao);

      Date GetDataAdmissao();
      Date GetDataDemissao();

      void SetDataAdmissao(Date DataAdmissao);

    private:
      void SetDataDemissao(Date DataDemissao);
  };

#endif