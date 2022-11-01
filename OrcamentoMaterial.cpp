#include "OrcamentoMaterial.hpp"

using namespace std;

int OrcamentoMaterial::GetQuantidadeNecessaria() {
    return this->QuantidadeNecessaria;
}

MateriaPrima OrcamentoMaterial::GetMateriasPrimas() {
    return this->MateriasPrimas;
}

void OrcamentoMaterial::SetQuantidadeNecessaria(int QuantidadeNecessaria) {
    this->QuantidadeNecessaria = QuantidadeNecessaria;
}

void OrcamentoMaterial::SetMateriasPrimas(MateriaPrima MateriasPrimas) {
    this->MateriasPrimas = MateriasPrimas;
}