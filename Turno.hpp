#ifndef TURNO_H
#define TURNO_H

 // #include <string>

  class Turno {
    protected:
      int Periodo;
      int HorarioPartida;

    public:
      Turno();
      Turno(int Periodo, int HorarioPartida);

      int GetPeriodo();
      int GetHorarioPartida();
      
      void SetPeriodo(int Periodo);
      void SetHorarioPartida(int HorarioPartida);
  };

#endif