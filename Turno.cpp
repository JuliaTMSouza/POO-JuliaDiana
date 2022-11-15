#include "Turno.hpp"

using namespace std;

string Turno::GetPeriodo() {
    return this->Periodo;
}

int Turno::GetHorarioPartida() {
    return this->HorarioPartida;
}

void Turno::SetPeriodo(string Periodo) {
    this->Periodo = Periodo;
}

void Turno::SetHorarioPartida(int HorarioPartida) {
    this->HorarioPartida = HorarioPartida;
}
