#ifndef MATERIAPRIMA_H
#define MATERIAPRIMA_H

  #include <string>
  #include "OrcamentoMaterial.hpp"
  #include "Estoque.hpp"
  #include "Lote.hpp"

  using namespace std;

  class MateriaPrima {
    protected:
      string Nome;
      Estoque EstoqueAtual;
      OrcamentoMaterial DadosOrcamento;
      Lote LoteAtual;
      string Medida;

      //void ValidaOrcamento();

    public:
      string GetNome();
      Lote GetLoteAtual();
      OrcamentoMaterial GetDadosOrcamento();
      Estoque GetEstoqueAtual();
      string GetMedida();

      void SetNome(string Nome);
      void SetLoteAtual(Lote LoteAtual);
      void SetDadosOrcamento(OrcamentoMaterial DadosOrcamento);
      void SetEstoqueAtual(Estoque EstoqueAtual);
      void SetMedida(string Medida);

  };

#endif