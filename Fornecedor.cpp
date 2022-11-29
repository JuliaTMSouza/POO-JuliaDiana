#include "Fornecedor.hpp"

using namespace std;

float Fornecedor::RequerirOrcamento(string MateriasPrima, float Quantidade){

    float precoTotal = 0;
    list<Valor>::iterator positValor = this->PrecoMateriais.begin();

    for(; positValor != this->PrecoMateriais.end(); positValor++){
        precoTotal += positValor->GetValor();
    }

    return precoTotal;
}

void Fornecedor::AtualizaPrecoMateriais(/*MateriaPrima MateriasPrima, Valor PrecoMateriais*/ Date Data){
    /*list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin();
    list<Valor>::iterator positValor = this->PrecoMateriais.begin();

    for(; positMaterial != this->MateriasPrima.end(); positMaterial++){
        if(positMaterial->GetNome() == MateriasPrima.GetNome()){
            positValor->SetValor(PrecoMateriais.GetValor());
            positValor->SetData(PrecoMateriais.GetData());
        }
        positValor++;
    }*/

    cout << "era pra tar atualizando preco";
    list<MateriaPrima>::iterator positMaterial = this->MateriasPrima.begin();
    list<Valor>::iterator positValor = this->PrecoMateriais.begin();
    cout << " forn" << endl;
    for(float atualizando; positValor != this->PrecoMateriais.end(); positValor++){
        atualizando = (positValor->GetValor()) * 1.05;
        cout << "atualizando: " << atualizando;
        positValor->SetValor(atualizando);
        positValor->SetData(Data);
    }
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
