#include "Fornecedor.hpp"

using namespace std;

float Fornecedor::RequerirOrcamento(string MateriasPrima, float Quantidade){

    float precoTotal = 0;
    list<Valor>::iterator positValor = this->PrecoMateriais.begin();

    for(; positValor != this->PrecoMateriais.end(); positValor++){
        //cout << positValor->GetValor() << endl;
        precoTotal += positValor->GetValor();
        positValor->SetValor(positValor->GetValor() * 1.05);
    }

    return precoTotal;
}

void Fornecedor::AtualizaPrecoMateriais(/*MateriaPrima MateriasPrima, Valor PrecoMateriais*/ Date Data){

    //cout << "ATUALIZA PRECOS" << endl;
    //list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin();
    list<Valor>::iterator positValor = this->PrecoMateriais.begin();

    float atualizando;
    for(; positValor != this->PrecoMateriais.end(); positValor++){

        atualizando = positValor->GetValor();
        atualizando *= 1.05;
        //cout << "atualizando: " << atualizando << " " << endl;
        positValor->SetValor(atualizando);
        //positValor->SetData(Data);
    }
    //cout << "";

}

list<MateriaPrima> Fornecedor::GetMateriasPrima(){
    return this->MateriasPrima;
}
list<Valor> Fornecedor::GetPrecoMateriais(){
    return this->PrecoMateriais;
}

void Fornecedor::SetMateriasPrima(MateriaPrima MateriasPrima, Valor PrecoMateriais){
    this->MateriasPrima.push_back(MateriasPrima);
    this->PrecoMateriais.push_back(PrecoMateriais);
}
