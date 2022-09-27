#include "Lote.hpp"

//lembrar de verificar implementação dos métodos do número

using namespace std;

int Lote::GetQuantidade() {
    return this->Quantidade;
}

string Lote::GetDataProducao() {
    return this->DataProducao;
}

int Lote::GetNumero() {
    return this->Numero;
}

void Lote::SetQuantidade(int Quantidade) {
    this->Quantidade = Quantidade;
}

void Lote::SetDataProducao(string DataProducao) {
    this->DataProducao = DataProducao;
}

void Lote::SetNumero() {
    this->Numero = GetLoteAtual();
    setLoteAtual();
}