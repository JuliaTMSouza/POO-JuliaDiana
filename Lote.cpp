#include "Lote.hpp"

//lembrar de verificar implementação dos métodos do número

using namespace std;

Lote::Lote(){

}

Lote::Lote(int Quantidade, Date DataProducao, int NumeroLote, float ValorDeCompra){
    this->Quantidade = Quantidade;
    this->DataProducao = DataProducao;
    this->NumeroLote = NumeroLote;
    this->ValorDeCompra = ValorDeCompra;//DefineProduto.GetLoteAtual();
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

float Lote::GetValorDeCompra() {
    return this->ValorDeCompra;
}
