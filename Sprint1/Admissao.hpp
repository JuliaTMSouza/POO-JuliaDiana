#ifndef ADIMISSAO_H
#define ADIMISSAO_H

  #include <iostream>
  #include <string>

  using namespace std;

  class Admissao {
    protected:
      string DataAdmissao;
      string DataDemissao;

    public:
      Admissao(string DataAdmissao);

      string GetDataAdmissao();
      string GetDataDemissao();

      void SetDataAdmissao(string DataAdmissao);

    private:
      void SetDataDemissao(string DataDemissao);
  };

#endif