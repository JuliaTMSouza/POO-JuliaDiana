#ifndef TURNO_H
#define TURNO_H

 // #include <string>

  class Turno {
    protected:
      int Periodo;
      int HorarioPartida;

    public:
      int GetPeriodo();
      int GetHorarioPartida();
      
      void SetPeriodo(int Periodo);
      void SetHorarioPartida(int HorarioPartida);
  };

#endif