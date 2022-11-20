#include "Producao.hpp"
#include <sstream>

using namespace std;
/*
int Producao::GetQuantidadeNecessaria() {
    return this->QuantidadeNecessaria;
}
*/
int Producao::GetEstoqueMinimo() {
    return this->EstoqueMinimo;
}

list<MateriaPrima> Producao::GetMateriasPrimas() {
    return this->MateriasPrimas;
}

void Producao::SetEstoqueMinimo(string EstoqueMinimo) {

    string valorEst, medidaEst;

    istringstream estoque { EstoqueMinimo };
    getline(estoque, medidaEst, ' ');
    getline(estoque, medidaEst, ' ');

    
    if(medidaEst == "cm" || medidaEst == "g" || medidaEst == "unidades") this->EstoqueMinimo = stoi (valorEst);
    else if(medidaEst == "m") this->EstoqueMinimo = (stoi (valorEst)) / 100;
    else if(medidaEst == "Kg") this->EstoqueMinimo = (stoi (valorEst)) / 1000;
}

void Producao::SetMateriasPrimas(MateriaPrima MateriasPrimas) {
    this->MateriasPrimas.push_back(MateriasPrimas);
}