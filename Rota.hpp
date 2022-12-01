#ifndef ROTA_H
#define ROTA_H

  #include <string>
  #include <list>

  #include "Turno.hpp"
  #include "Funcionario.hpp"

  using namespace std;

  class Rota {
    private:
      list<Funcionario> OrdenaResidencias(list<Funcionario> Residentes);
      //depois conferir como vai ser isso aqui...

    protected:
      list<Funcionario> Residentes;
      list<string> RotaRealizada;
      Turno Turnos;
      float TempoPercurso;
      list<float> TempoEmbarque;

      void SetTempoEmbarque();

    public:

      Rota();
      Rota(list<Funcionario> Residentes);
      float calculaDistancia (float x1, float y1, float x2, float y2);

      Turno GetTurnos();
      list<string> GetRotaRealizada();
      float GetTempoPercurso();
      list<float> GetTempoEmbarque();

      void SetTurnos(Turno Turnos);
      void SetRotaRealizada();
      

  };

#endif