#ifndef ROTA_H
#define ROTA_H

  #include <string>
  #include <list>

  #include "Turno.hpp"
  /*#include "Funcionario.hpp"*/

  using namespace std;

  class Rota {
    private:
      float DistanciaResidencia();
      //depois conferir como vai ser isso aqui...

    protected:
      /*Funcionario Residentes;*/
      list<string> RotaRealizada;
      Turno Turnos;
      int TempoPercurso;
      int TempoEmbarque;

    public:

      /*Funcionario GetResidentes();*/
      Turno GetTurnos();
      list<string> GetRotaRealizada();
      int GetTempoPercurso();
      int GetTempoEmbarque();

      /*void SetResidentes(Funcionario Residentes);*/
      void SetTurnos(Turno Turnos);
      void SetRotaRealizada(string RotaRealizada);
      void SetTempoPercurso(int TempoPercurso);
      void SetTempoEmbarque(int TempoEmbarque);

  };

#endif