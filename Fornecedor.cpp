#include "Fornecedor.hpp"

using namespace std;

float Fornecedor::RequerirOrcamento(string Material, int Quantidade){
    list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin();
    list<Valor>::iterator positPreco = this->PrecoMateriais.begin();
    for (; positMaterial != this->MateriasPrima.end(); positMaterial++){
        if(positMaterial->GetNome() == Material) return Quantidade * positPreco->GetValor();
        positPreco++;
    }
}

list <MateriaPrima> Fornecedor::GetMateriasPrima() {
    return this->MateriasPrima;
}

list <Valor> Fornecedor::GetPrecoMateriais() {
    return this->PrecoMateriais;
}

void Fornecedor::SetMateriasPrima(list <MateriaPrima> MateriasPrima) {
    this->MateriasPrima = MateriasPrima;
}

void Fornecedor::SetPrecoMateriais(list <Valor> PrecoMateriais) {
    this->PrecoMateriais = PrecoMateriais;
}