#ifndef DISSIDIO_H
#define DISSIDIO_H

  #include <string>

  using namespace std;

  class Dissidio {
    protected:
      float Porcentagem;
      string Descricao;

    public:
      string GetDescricao();
      float GetPorcentagem();
      void SetDescricao(string Descricao);
      void SetPorcentagem(float Porcentagem);
  };

#endif