#include "Lote.hpp"

//lembrar de verificar implementação dos métodos do número

using namespace std;

Lote::Lote(){

}

Lote::Lote(int Quantidade, Date DataProducao, int NumeroLote){
    this->Quantidade = Quantidade;
    this->DataProducao = DataProducao;
    this->NumeroLote = NumeroLote;//DefineProduto.GetLoteAtual();
    //DefineProduto.SetLoteAtual();
}

int Lote::GetQuantidade() {
    return this->Quantidade;
}

Date Lote::GetDataProducao() {
    return this->DataProducao;
}

int Lote::GetNumeroLote() {
    return this->NumeroLote;
}

/*
void Lote::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Lote::SetDataProducao(Date DataProducao) {
    this->DataProducao = DataProducao;
}

void Lote::SetNumeroLote(Produto DefineProduto) {
    this->NumeroLote = DefineProduto.GetLoteAtual();
    DefineProduto.SetLoteAtual();
}
*/
