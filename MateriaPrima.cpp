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

float MateriaPrima::GetMedida(){
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

void MateriaPrima::SetEstoqueAtual(int EstoqueAtual) {
    this->EstoqueAtual += EstoqueAtual;
}

void MateriaPrima::SetEstoqueMinimo(string EstoqueMinimo) {
    string estoqueMinimoQtd = "";
    char cEstoqueMinimo[EstoqueMinimo.length()];
    float valorQtd = 0;

    strcpy (cEstoqueMinimo, EstoqueMinimo.c_str());

    for(int i = 0, j = -1; i < EstoqueMinimo.length(); i++){
        if(cEstoqueMinimo[i] == ' '){
            j++;
            i++;
        }
        if(j > -1) estoqueMinimoQtd += cEstoqueMinimo[i];
        else {
            valorQtd *= 10;
            valorQtd += (float) cEstoqueMinimo[i] - 48;
        }
    }
    cout << "ESTOQUE: " << valorQtd << estoqueMinimoQtd << endl;
    if(estoqueMinimoQtd == "cm2" || estoqueMinimoQtd == "cm" || estoqueMinimoQtd == "g" || estoqueMinimoQtd == "unidades") this->EstoqueMinimo = valorQtd;
    else if(estoqueMinimoQtd == "m2") this->EstoqueMinimo = valorQtd * 10000.0;
    else if(estoqueMinimoQtd == "m") this->EstoqueMinimo = valorQtd * 100.0;
    else if(estoqueMinimoQtd == "kg" || estoqueMinimoQtd == "Kg") this->EstoqueMinimo = valorQtd * 1000.0;

    cout <<  this->EstoqueMinimo << "\n\n";
}

void MateriaPrima::SetMedida(string Medida) {

    string medidaQtd = "";
    char cMedida[Medida.length()];
    float valorQtd = 0;

    strcpy (cMedida, Medida.c_str());

    for(int i = 0, j = -1; i < Medida.length(); i++){
        if(cMedida[i] == ' '){
            j++;
            i++;
        }
        if(j > -1) medidaQtd += cMedida[i];
        else {
            valorQtd *= 10;
            valorQtd += (float) cMedida[i] - 48;
        }
    }

    this->UnidadeMedida = medidaQtd;

    if(medidaQtd == "cm2" || medidaQtd == "cm" || medidaQtd == "g" || medidaQtd == "unidades") this->Medida = valorQtd;
    else if(medidaQtd == "m2") this->Medida = valorQtd * 10000.0;
    else if(medidaQtd == "m") this->Medida = valorQtd * 100.0;
    else if(medidaQtd == "kg" || medidaQtd == "Kg") this->Medida = valorQtd * 1000.0;

}

