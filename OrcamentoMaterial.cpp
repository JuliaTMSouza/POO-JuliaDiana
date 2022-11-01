#include "Producao.hpp"

using namespace std;

int Producao::GetQuantidadeNecessaria() {
    return this->QuantidadeNecessaria;
}

MateriaPrima Producao::GetMateriasPrimas() {
    return this->MateriasPrimas;
}

void Producao::SetQuantidadeNecessaria(int QuantidadeNecessaria) {
    this->QuantidadeNecessaria = QuantidadeNecessaria;
}

void Producao::SetMateriasPrimas(MateriaPrima MateriasPrimas) {
    this->MateriasPrimas = MateriasPrimas;
}