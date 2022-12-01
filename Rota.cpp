#include "Rota.hpp"
#include "math.h"

using namespace std;


Rota::Rota(){}

Rota::Rota(list<Funcionario> Residentes){
    this->Residentes = OrdenaResidencias(Residentes);
}

float Rota::calculaDistancia (float x1, float y1, float x2, float y2) {
    return 110.57 * sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}

void endereco(float *x, float *y, string xyStr){
    char xy[xyStr.length()];
    strcpy(xy, xyStr.c_str());
    float x_in = 0, y_in = 0;

    for(int i = 0, j = -1; i < xyStr.length(); i++){
        if(xy[i] == ' '){
            j++;
            i++;
        }
        if(j > -1) {
            x_in *= 10;
            x_in += (float) xy[i] - 48;
        }
        else {
            y_in *= 10;
            y_in += (float) xy[i] - 48;
        }
    }

    x = &x_in;
    y = &y_in;
}

list<Funcionario> Rota::OrdenaResidencias(list<Funcionario> Residentes){
    
    list<Funcionario> novaOrdem;
    Funcionario maisProx;
    float menorDistancia = 0, x_var, y_var, x_fixo = 0, y_fixo = 0;

    for(int i = 0; i < Residentes.size(); i++){
        list<Funcionario>::iterator positResidentes = Residentes.begin();
        for(; positResidentes != Residentes.end(); positResidentes++){
            endereco(&x_var, &y_var, positResidentes->GetEndereco());

            if((calculaDistancia(x_fixo, y_fixo, x_var, y_var) < menorDistancia || menorDistancia == 0) && (calculaDistancia(x_fixo, y_fixo, x_var, y_var) != menorDistancia)){
                maisProx = *positResidentes;
                menorDistancia = calculaDistancia(x_fixo, y_fixo, x_var, y_var);
            }
        }
        novaOrdem.push_back(maisProx);
        endereco(&x_fixo, &y_fixo, maisProx.GetEndereco());
    }
    SetTempoEmbarque();
    return novaOrdem;
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

float Rota::GetTempoPercurso() {
    return this->TempoPercurso;
}

list<float> Rota::GetTempoEmbarque(){
    return this->TempoEmbarque;
}

/*void Rota::SetResidentes(Funcionario Residentes) {
    this->Residentes = Residentes;
}
*/
void Rota::SetTurnos(Turno Turnos) {
    this->Turnos = Turnos;
}

void Rota::SetRotaRealizada() {

    string RotaRealizada = "";
    int tempo = this->GetTempoPercurso() / 60 + 1;
    int hora = (this->Turnos.GetHorarioPartida() - tempo), min = 0;
    float horarioAtual = 0;

    list<Funcionario>::iterator positResidentes = this->Residentes.begin();
    list<float>::iterator positTempo = this->TempoEmbarque.begin();
    for(; positResidentes != this->Residentes.end(); positResidentes++){
        RotaRealizada += positResidentes->GetNome() + "- ";
        horarioAtual += *positTempo;
        if(horarioAtual >= 60) {
            hora++;
            horarioAtual -= 60;
        }
        min = horarioAtual;
        RotaRealizada += to_string(hora) + ":" + to_string(min) + ".\n";
    }
    RotaRealizada += "\n";

    this->RotaRealizada.push_back(RotaRealizada);
}
/*
void Rota::SetTempoPercurso(int TempoPercurso) {

    this->TempoPercurso = TempoPercurso;
}
*/
void Rota::SetTempoEmbarque() {

    list<Funcionario>::iterator positResidentes = this->Residentes.begin();
    float tempoTotal = 0;
    for(float x1 = 0, y1 = 0, x2 = 0, y2 = 0, tempoAtual; positResidentes != this->Residentes.end(); positResidentes++){
        //30 km/h = 0,5 km/min = 500m/min
        endereco(&x2, &y2, positResidentes->GetEndereco());
        tempoAtual = (calculaDistancia(x1, y1, x2, y2)/0.5+2);
        this->TempoEmbarque.push_back(tempoAtual);
        tempoTotal += tempoAtual;
    }

    this->TempoPercurso = tempoTotal;
}

