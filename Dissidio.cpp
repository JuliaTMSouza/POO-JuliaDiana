#include "Dissidio.hpp"

using namespace std;

float Dissidio::GetPorcentagem() {
    return this->Porcentagem;
}

string Dissidio::GetDescricao() {
    return this->Descricao;
}

void Dissidio::SetPorcentagem(float Porcentagem) {
    this->Porcentagem = Porcentagem;
}

void Dissidio::SetDescricao(string Descricao) {
    this->Descricao = Descricao;
}