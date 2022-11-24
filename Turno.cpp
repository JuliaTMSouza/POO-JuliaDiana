#include "Turno.hpp"

using namespace std;

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
