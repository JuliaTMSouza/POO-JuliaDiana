#ifndef DATE_H
#define DATE_H

  #include <string>

  class Date {
    protected:
      string Data; //fazer Enum

    public:
      string GetData();
      
      void SetData(string Data);
  };

#endif