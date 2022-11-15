#ifndef TURNO_H
#define TURNO_H

  #include <string>

  class Turno {
    protected:
      string Periodo; //fazer Enum
      int HorarioPartida;

    public:
      string GetPeriodo();
      int GetHorarioPartida();
      
      void SetPeriodo(string Periodo);
      void SetHorarioPartida(int HorarioPartida);
  };

#endif