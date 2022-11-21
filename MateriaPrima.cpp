#include "MateriaPrima.hpp"
#include <sstream>

using namespace std;

MateriaPrima::MateriaPrima(){
    this->LoteAtual = 0;
}
string MateriaPrima::GetNome() {
    return this->Nome;
}

int MateriaPrima::GetEstoqueAtual() {
    return this->EstoqueAtual;
}

int MateriaPrima::GetEstoqueMinimo() {
    return this->EstoqueMinimo;
}

list<Lote> MateriaPrima::GetLotes() {
    return this->Lotes;
}

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

void MateriaPrima::SetLotes(int Quantidade, Date DataProducao){
    SetLoteAtual();
    
    Lote NovoLote(Quantidade+this->EstoqueMinimo, DataProducao, GetLoteAtual());
    this->Lotes.push_back(NovoLote);
}

void MateriaPrima::SetEstoqueAtual(int EstoqueAtual) {
    this->EstoqueAtual += EstoqueAtual;
}

void MateriaPrima::SetEstoqueMinimo(int EstoqueMinimo) {
    this->EstoqueMinimo = EstoqueMinimo;
}

void MateriaPrima::SetMedida(string Medida) {

    string valorQtd = "", medidaQtd = "";
    char cMedida[Medida.length()];

    strcpy (cMedida, Medida.c_str());

    /*istringstream quantidade { Medida };
    getline(quantidade, valorQtd, ' ');
    getline(quantidade, medidaQtd, ' ');*/

    for(int i = 0, j = -1; i < Medida.length(); i++){
        if(cMedida[i] == ' '){
            j++;
            i++;
        }
        if(j > -1) medidaQtd += cMedida[i];
        else valorQtd += cMedida[i];
    }
    
    //cout << ")) medidas: " << medidaQtd << " " << valorQtd << "\t";

    this->UnidadeMedida = medidaQtd;

    if(medidaQtd == "cm2" || medidaQtd == "cm" || medidaQtd == "g" || medidaQtd == "unidades") this->Medida = stoi (valorQtd);
    else if(medidaQtd == "m2") this->Medida = (stoi (valorQtd)) / 10000.0;
    else if(medidaQtd == "m") this->Medida = (stoi (valorQtd)) / 100.0;
    else if(medidaQtd == "Kg") this->Medida = (stoi (valorQtd)) / 1000.0;
       // cout << ")) medidasII: ." << this->UnidadeMedida << ". " << this->Medida << endl;

}

