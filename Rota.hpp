#ifndef ROTA_H
#define ROTA_H

  #include <string>
  #include <vector>
  #include "Turno.hpp"
  #include "Funcionario.hpp"

  using namespace std;

  class Rota {
    private:
      float DistanciaResidencia();
      //depois conferir como vai ser isso aqui...

    protected:
      Funcionario Residentes;
      vector<string> RotaRealizada;
      Turno Turnos;
      int TempoPercurso;
      int TempoEmbarque;

    public:
      Funcionario GetResidentes();
      int GetTempoPercurso();
      Turno GetTurnos();
      vector <string> GetRotaRealizada();
      int GetTempoEmbarque();

      void SetResidentes(Funcionario Residentes);
      void SetTempoPercurso(int TempoPercurso);
      void SetTurnos(Turno Turnos);
      void SetRotaRealizada(vector<string> RotaRealizada);
      void SetTempoEmbarque(int TempoEmbarque);

  };

#endif