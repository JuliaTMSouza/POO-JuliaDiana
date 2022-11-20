#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <cstddef>
#include <time.h>
#include "Date.hpp"
#include "ExecaoCustomizada.h"

using namespace std;

//Metodos Privados:

int bissexto(int year){
    return year % 4 == 0 && (year % 400 == 0 || year % 100 != 0) ? 1 : 0;
}

int monthToDays(int month){
    return month == 2 ? 28 :
           month <= 7 ? 30 + (month % 2) :
           month > 7 ? 31 - (month % 2) : 31;
}

void Date::ticksToDate() {
    //Inicializa as datas
    this->ano = 1970;
    this->mes = 0;
    this->dia = 1;
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
    long availableTicks = this->ticks;
    bool stopYears = false;

    while(availableTicks >= YEAR_TO_SECONDS && !stopYears){
        availableTicks -= (YEAR_TO_SECONDS + (bissexto(this->ano) * DAY_TO_SECONDS));
        this->ano++;
        if(bissexto(this->ano) == 1){
            if(availableTicks <  (YEAR_TO_SECONDS+DAY_TO_SECONDS)){
                stopYears = true;
            }
        }
    }
  this->mes += 1;
    while(availableTicks > 0) {
        long duracaoMes = monthToDays(this->mes) * DAY_TO_SECONDS;
        if (availableTicks >= duracaoMes){
            availableTicks -= duracaoMes;
            this->mes++;
        }else if(availableTicks >= DAY_TO_SECONDS){
            this->dia += (int) availableTicks/DAY_TO_SECONDS;
            availableTicks-= (this->dia-1) * DAY_TO_SECONDS;
        }else if(availableTicks >= HOURS_TO_SECONDS){
            this->hora += (int) availableTicks/HOURS_TO_SECONDS;
            availableTicks-= this->hora * HOURS_TO_SECONDS;
        }else if(availableTicks >= MINUTE_TO_SECONDS){
            this->minuto += (int) availableTicks/MINUTE_TO_SECONDS;
            availableTicks-= this->minuto * MINUTE_TO_SECONDS;
        }else{
            this->segundo = availableTicks;
          availableTicks = 0;
        }
    }



}
void Date::dateToTicks() {
    this->ticks = 0;
    for (int currentYear = 1970; currentYear < this->ano; currentYear++) {
        this->ticks += YEAR_TO_SECONDS;
        if(bissexto(currentYear) == 1){
            this->ticks += DAY_TO_SECONDS;
        }
    }

    for (int currentMonth = 0; currentMonth < (this->mes-1);currentMonth++){
        this->ticks += (monthToDays(currentMonth) * DAY_TO_SECONDS);
        if(currentMonth == 2 && bissexto(this->ano) == 1 && this->mes > 2){
            this->ticks += DAY_TO_SECONDS;
        }
    }
    this->ticks += (this->dia-1) * DAY_TO_SECONDS;
    this->ticks += this->hora * HOURS_TO_SECONDS;
    this->ticks += this->minuto * MINUTE_TO_SECONDS;
    this->ticks += this->segundo;
}

//Construtores:

Date::Date()
{
    ano= 1970;
    mes= 1;
    dia= 1;
    hora= 0;
    minuto= 0;
    segundo= 0;
    dateToTicks();
    validaData();
}

Date::Date(Formato valFormato)
{
    ano= 1970;
    mes= 1;
    dia= 1;
    hora= 0;
    minuto= 0;
    segundo= 0;
    formatoData= valFormato;
    dateToTicks();
    validaData();
}

Date::Date(int valAno, int valMes, int valDia, int valHora, int valMin, int valSeg)
{
    ano= valAno;
    mes= valMes;
    dia= valDia;
    hora= valHora;
    minuto= valMin;
    segundo= valSeg;
    dateToTicks();
    validaData();
}

Date::Date(long valTicks)
{
    ticks= valTicks;
    ticksToDate();
    validaData();
}

//Destrutor:
Date::~Date(){}

//Operadores:

bool Date::operator==(Date &d2)
{
	return ((ano == d2.ano)&&(mes == d2.mes)&&(dia == d2.dia)&&(hora == d2.hora)&&
           (minuto == d2.minuto)&&(segundo == d2.segundo)||(ticks == d2.ticks));
}

bool Date::operator<(Date &d2)
{
	return ((ano<d2.ano)||(ano==d2.ano && mes<d2.mes)||(ano==d2.ano && mes==d2.mes && dia<d2.dia)||
           (ano==d2.ano && mes==d2.mes && dia==d2.dia && hora<d2.hora)||(ano==d2.ano && mes==d2.mes&&
           dia==d2.dia && hora==d2.hora && minuto<d2.minuto)||(ano==d2.ano && mes==d2.mes && dia==d2.dia &&
           hora==d2.hora && minuto==d2.minuto && segundo<d2.segundo));
}

bool Date::operator>(Date &d2)
{
    return !((ano<d2.ano)||(ano==d2.ano && mes<d2.mes)||(ano==d2.ano && mes==d2.mes && dia<d2.dia)||
	       (ano==d2.ano && mes==d2.mes && dia==d2.dia && hora<d2.hora)||(ano==d2.ano && mes==d2.mes&&
           dia==d2.dia && hora==d2.hora && minuto<d2.minuto)||(ano==d2.ano && mes==d2.mes && dia==d2.dia &&
           hora==d2.hora && minuto==d2.minuto && segundo<d2.segundo));
}

Date Date::operator-(Date &d2)
{
    Date aux(ticks-d2.getTicks());
    if (ticks<d2.getTicks()) {        //Tratamento de excecao se for tentada uma subtracao impossivel
        char message[100] = "Erro: Resultado eh data negativa, inverta parametros";
        throw ExecaoCustomizada(message);
    }
    else
        return aux;
}

//Metodos get:

int Date::getAno()
{
    return ano;
}

int Date::getMes()
{
    return mes;
}

int Date::getDia()
{
    return dia;
}

int Date::getHora()
{
    return hora;
}

int Date::getMin()
{
    return minuto;
}

int Date::getSeg()
{
    return segundo;
}

long Date::getTicks()
{
    return ticks;
}

string Date::getFormato()
{
    return formatoData.getNome();
}

//Metodos set:

void Date::setAno(int valAno)
{
    ano= valAno;
    dateToTicks();
    validaData();
}

void Date::setMes(int valMes)
{
    mes= valMes;
    dateToTicks();
    validaData();
}

void Date::setDia(int valDia)
{
    dia= valDia;
    dateToTicks();
    validaData();
}

void Date::setHora(int valHora)
{
    hora= valHora;
    dateToTicks();
    validaData();
}

void Date::setMin(int valMin)
{
    minuto= valMin;
    dateToTicks();
    validaData();
}

void Date::setSeg(int valSeg)
{
    segundo= valSeg;
    dateToTicks();
    validaData();
}

void Date::setTicks(long valTicks)
{
    ticks= valTicks;
    ticksToDate();
    validaData();
}

void Date::setFormato(Formato valFormato)
{
    formatoData= valFormato;
}

//Outros metodos:

bool Date::validaData()
{
    int condicao= 1;
    if ((segundo<0)||(minuto<0)||(hora<0)||(dia<0)||(mes<0)||(ano<1970))
        condicao= 0;
    else if ((segundo>59)||(minuto>59)||(hora>23)||(mes>12))
        condicao= 0;
    else if ((dia>31)&&((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)))
        condicao= 0;
    else if ((dia>30)&&((mes==4)||(mes==6)||(mes==9)||(mes==11)))
        condicao= 0;
    if ((ano%400==0)||((ano%4==0)&&(ano%100!=0)))
    {
        if ((mes==2)&&(dia>29))
            condicao= 0;
    }
    else
    {
        if ((mes==2)&&(dia>28))
            condicao= 0;
    }
    if (condicao==0) {
        char message[100] = "Data inválida.";
        throw ExecaoCustomizada(message);
    }
    return (condicao==1);
}

Date Date::dateNow()
{
    time_t tempo= time(NULL);
    double a= double(tempo);
    Date aux(tempo);
    return aux;
}

void Date::printData()
{
    if (strcmp(formatoData.getNome().c_str(),"PT-BR")==0)
    {
        cout << dia << formatoData.getSeparadorData() << mes << formatoData.getSeparadorData() << ano << "  ";
        cout << hora << formatoData.getSeparadorHorario() << minuto << formatoData.getSeparadorHorario() << segundo << endl;
    }
    else if (strcmp(formatoData.getNome().c_str(),"EN-US")==0)
    {
        cout << ano << formatoData.getSeparadorData() << mes << formatoData.getSeparadorData() << dia << "  ";
        cout << hora << formatoData.getSeparadorHorario() << minuto << formatoData.getSeparadorHorario() << segundo << endl;
    }
    else {       //Tratamento de excecao de formato invalido
        char message[100] = "Erro: Esperado argumento PT-BR ou EN-US";
        throw ExecaoCustomizada(message);
    }
}

string Date::getData() {
  string data = "";
   if (strcmp(formatoData.getNome().c_str(),"PT-BR")==0)
    {
      data = std::to_string(dia) + formatoData.getSeparadorData() + std::to_string(mes) + formatoData.getSeparadorData() + to_string(ano) + " " + to_string(hora)  + formatoData.getSeparadorHorario() + to_string(minuto) + formatoData.getSeparadorHorario() + to_string(segundo);

    }
   else if (strcmp(formatoData.getNome().c_str(),"EN-US")==0)
    {
       data = std::to_string(ano) + formatoData.getSeparadorData() + std::to_string(mes) + formatoData.getSeparadorData() + to_string(dia) + " " + to_string(hora)  + formatoData.getSeparadorHorario() + to_string(minuto) + formatoData.getSeparadorHorario() + to_string(segundo);
    }
    else {       //Tratamento de excecao de formato invalido
        char message[100] = "Erro: Esperado argumento PT-BR ou EN-US";
        throw ExecaoCustomizada(message);
    }
  return data;
}

int Date::diffData(Date d2) {
  int diff = ticks - d2.getTicks();
  return diff / 60 / 60 / 24;
}
