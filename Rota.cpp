#include "Rota.hpp"

using namespace std;

float Rota::DistanciaResidencia(){
    //Criar a função...
}

Funcionario Rota::GetResidentes() {
    return this->Residentes;
}

vector<string> Rota::GetRotaRealizada() {
    return this->RotaRealizada;
}

Turno Rota::GetTurnos() {
    return this->Turnos;
}

int Rota::GetTempoPercurso() {
    return this->TempoPercurso;
}

int Rota::GetTempoEmbarque(){
    return this->TempoEmbarque;
}

void Rota::SetResidentes(Funcionario Residentes) {
    this->Residentes = Residentes;
}

void Rota::SetTempoPercurso(int TempoPercurso) {
    this->TempoPercurso = TempoPercurso;
}

void Rota::SetTurnos(Turno Turnos) {
    this->Turnos = Turnos;
}

void Rota::SetRotaRealizada(vector<string> RotaRealizada) {
    this->RotaRealizada = RotaRealizada;
}

void Rota::SetTempoEmbarque(int TempoEmbarque) {
    this->TempoEmbarque = TempoEmbarque;
}

