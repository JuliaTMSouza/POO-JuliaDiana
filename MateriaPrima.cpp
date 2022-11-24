#include "MateriaPrima.hpp"
#include <sstream>

using namespace std;

MateriaPrima::MateriaPrima(){
    this->LoteAtual = 0;
}

string MateriaPrima::GetNome() {
    return this->Nome;
}

float MateriaPrima::GetEstoqueAtual() {
    return this->EstoqueAtual;
}

float MateriaPrima::GetEstoqueMinimo() {
    return this->EstoqueMinimo;
}

list<Lote> MateriaPrima::GetLotes() {
    return this->Lotes;
}

/*list<Orcamento> MateriaPrima::GetCompras(){
    return this->Compras;
}*/

int MateriaPrima::GetMedida(){
    return this->Medida;
}

string MateriaPrima::GetUnidadeMedida(){
    return this->UnidadeMedida;
}

int MateriaPrima::GetLoteAtual(){
    return this->LoteAtual;
}

void MateriaPrima::SetLoteAtual(){
    this->LoteAtual++;
}

void MateriaPrima::SetNome(string Nome) {
    this->Nome = Nome;
}

void MateriaPrima::SetLotes(int Quantidade, Date DataProducao, float ValorDeCompra){
    SetLoteAtual();
    
    Lote NovoLote(Quantidade, DataProducao, GetLoteAtual(), ValorDeCompra);
    this->Lotes.push_back(NovoLote);
}

/*void MateriaPrima::SetCompras(Orcamento NovoOrcamento){
    this->Compras.push_back(NovoOrcamento);
}*/

void MateriaPrima::SetEstoqueAtual(int EstoqueAtual) {
    this->EstoqueAtual += EstoqueAtual;
}

void MateriaPrima::SetEstoqueMinimo(string EstoqueMinimo) {
    string valorQtd = "", estoqueMinimoQtd = "";
    char cEstoqueMinimo[EstoqueMinimo.length()];

    strcpy (cEstoqueMinimo, EstoqueMinimo.c_str());

    for(int i = 0, j = -1; i < EstoqueMinimo.length(); i++){
        if(cEstoqueMinimo[i] == ' '){
            j++;
            i++;
        }
        if(j > -1) estoqueMinimoQtd += cEstoqueMinimo[i];
        else valorQtd += cEstoqueMinimo[i];
    }

    if(estoqueMinimoQtd == "cm2" || estoqueMinimoQtd == "cm" || estoqueMinimoQtd == "g" || estoqueMinimoQtd == "unidades") this->EstoqueMinimo = stoi (valorQtd);
    else if(estoqueMinimoQtd == "m2") this->EstoqueMinimo = (stoi (valorQtd)) * 1000.0;
    else if(estoqueMinimoQtd == "m") this->EstoqueMinimo = (stoi (valorQtd)) * 100.0;
    else if(estoqueMinimoQtd == "Kg") this->EstoqueMinimo = (stoi (valorQtd)) * 1000.0;
}

void MateriaPrima::SetMedida(string Medida) {

    string valorQtd = "", medidaQtd = "";
    char cMedida[Medida.length()];

    strcpy (cMedida, Medida.c_str());

    for(int i = 0, j = -1; i < Medida.length(); i++){
        if(cMedida[i] == ' '){
            j++;
            i++;
        }
        if(j > -1) medidaQtd += cMedida[i];
        else valorQtd += cMedida[i];
    }
    
    this->UnidadeMedida = medidaQtd;

    if(medidaQtd == "cm2" || medidaQtd == "cm" || medidaQtd == "g" || medidaQtd == "unidades") this->Medida = stoi (valorQtd);
    else if(medidaQtd == "m2") this->Medida = (stoi (valorQtd)) / 10000.0;
    else if(medidaQtd == "m") this->Medida = (stoi (valorQtd)) / 100.0;
    else if(medidaQtd == "Kg") this->Medida = (stoi (valorQtd)) / 1000.0;

}

