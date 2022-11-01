#include "Fornecedor.hpp"

using namespace std;

MateriaPrima Fornecedor::GetMateriasPrima() {
    return this->MateriasPrima;
}

void Fornecedor::SetMateriasPrima(MateriaPrima MateriasPrima) {
    this->MateriasPrima = MateriasPrima;
}