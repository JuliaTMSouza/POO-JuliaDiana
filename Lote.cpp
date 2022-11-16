#include "Lote.hpp"

//lembrar de verificar implementação dos métodos do número

using namespace std;

Lote::Lote(int Quantidade, Date DataProducao, int Numero){
    this->Quantidade = Quantidade;
    this->DataProducao = DataProducao;
    this->Numero = Numero;//DefineProduto.GetLoteAtual();
    //DefineProduto.SetLoteAtual();
}

int Lote::GetQuantidade() {
    return this->Quantidade;
}

Date Lote::GetDataProducao() {
    return this->DataProducao;
}

int Lote::GetNumero() {
    return this->Numero;
}

/*
void Lote::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Lote::SetDataProducao(Date DataProducao) {
    this->DataProducao = DataProducao;
}

void Lote::SetNumero(Produto DefineProduto) {
    this->Numero = DefineProduto.GetLoteAtual();
    DefineProduto.SetLoteAtual();
}
*/

void SolicitarNovoLote(){
    //Montar solicitação
}