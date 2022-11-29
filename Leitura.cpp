#include "Leitura.hpp"

using namespace std;

string Leitura::GetInformacaoAcessada() {
    return this->InformacaoAcessada;
}

void Leitura::SetInformacaoAcessada(string InformacaoAcessada) {
    this->InformacaoAcessada = InformacaoAcessada;
}

Leitura::Leitura(Date Data, string Nome, string Entidade, string Atributo) {
    this->Data = Data;
    this->Nome = Nome;
    this->Entidade = Entidade;
    this->InformacaoAcessada = Atributo;
}