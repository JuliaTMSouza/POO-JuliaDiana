#include "Turno.hpp"

using namespace std;

Turno::Turno(){}

Turno::Turno(int Periodo, int HorarioPartida){
    this->Periodo = Periodo;
    this->HorarioPartida = HorarioPartida;
}

int Turno::GetPeriodo() {
    return this->Periodo;
}

int Turno::GetHorarioPartida() {
    return this->HorarioPartida;
}

void Turno::SetPeriodo(int Periodo) {
    this->Periodo = Periodo;
}

void Turno::SetHorarioPartida(int HorarioPartida) {
    this->HorarioPartida = HorarioPartida;
}
