#include "Rota.hpp"

using namespace std;


float Rota::DistanciaResidencia(){
    //Criar a função...
}

/*Funcionario Rota::GetResidentes() {
    return this->Residentes;
}
*/
Turno Rota::GetTurnos() {
    return this->Turnos;
}

list<string> Rota::GetRotaRealizada() {
    return this->RotaRealizada;
}

int Rota::GetTempoPercurso() {
    return this->TempoPercurso;
}

int Rota::GetTempoEmbarque(){
    return this->TempoEmbarque;
}

/*void Rota::SetResidentes(Funcionario Residentes) {
    this->Residentes = Residentes;
}
*/
void Rota::SetTurnos(Turno Turnos) {
    this->Turnos = Turnos;
}

void Rota::SetRotaRealizada(string RotaRealizada) {
    this->RotaRealizada.push_back(RotaRealizada);
}

void Rota::SetTempoPercurso(int TempoPercurso) {
    this->TempoPercurso = TempoPercurso;
}

void Rota::SetTempoEmbarque(int TempoEmbarque) {
    this->TempoEmbarque = TempoEmbarque;
}

