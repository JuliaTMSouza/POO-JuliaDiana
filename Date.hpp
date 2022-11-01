#ifndef DATE_H
#define DATE_H

  #include <string>
  using namespace std;

  class Date {
    protected:
      string Vencimento;

    public:
      string GetVencimento();
      
      void SetVencimento(string Vencimento);
  };

#endif