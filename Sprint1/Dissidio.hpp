#ifndef DISSIDIO_H
#define DISSIDIO_H

  #include <string>

  using namespace std;

  class Dissidio {
    protected:
      string Porcentagem;
      string Descricao;

    public:
      string GetDescricao();
      string GetPorcentagem();
      void SetDescricao(string Descricao);
      void SetPorcentagem(string Porcentagem);
  };

#endif