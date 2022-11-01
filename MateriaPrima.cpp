#include "MateriaPrima.hpp"

using namespace std;

string MateriaPrima::GetNome() {
    return this->Nome;
}

Estoque MateriaPrima::GetEstoqueAtual() {
    return this->EstoqueAtual;
}

OrcamentoMaterial MateriaPrima::GetDadosOrcamento() {
    return this->DadosOrcamento;
}

Lote MateriaPrima::GetLoteAtual() {
    return this->LoteAtual;
}

string MateriaPrima::GetMedida(){
    return this->Medida;
}

void MateriaPrima::SetNome(string Nome) {
    this->Nome = Nome;
}

void MateriaPrima::SetLoteAtual(Lote LoteAtual) {
    this->LoteAtual = LoteAtual;
}

void MateriaPrima::SetDadosOrcamento(OrcamentoMaterial DadosOrcamento) {
    this->DadosOrcamento = DadosOrcamento;
}

void MateriaPrima::SetEstoqueAtual(Estoque EstoqueAtual) {
    this->EstoqueAtual = EstoqueAtual;
}

void MateriaPrima::SetMedida(string Medida) {
    this->Medida = Medida;
}

