#include "Dissidio.hpp"

using namespace std;

string Dissidio::GetPorcentagem() {
    return this->Porcentagem;
}

string Dissidio::GetDescricao() {
    return this->Descricao;
}

void Dissidio::SetPorcentagem(string Porcentagem) {
    this->Porcentagem = Porcentagem;
}

void Dissidio::SetDescricao(string Descricao) {
    this->Descricao = Descricao;
}