#ifndef EMPRESA_H
#define EMPRESA_H

  #include <string>
  #include <stdbool.h>

  #include "Departamento.hpp"
  #include "Cargo.hpp"
  #include "Funcionario.hpp"
  #include "Cliente.hpp"
  #include "Categoria.hpp"
  #include "Estoque.hpp"
  #include "Produto.hpp"
  #include "Vendas.hpp"

  using namespace std;

  class Empresa {
    private:
      Empresa();
      static bool EmpresaCriada = false;

    protected:
      Departamento Departamentos;
      Cargo Cargos;
      Funcionario Funcionarios;
      Cliente Clientes;
      Categoria Categorias;
      Estoque Estoques;
      Produto Produtos;
      Vendas ListaVendas;
      

    public:
      bool ConfereEmpresa();

      Departamento GetDepartamentos();
      Cargo GetCargos();
      Funcionario GetFuncionarios();
      Cliente GetClientes();
      Categoria GetCategorias();
      Estoque GetEstoques();
      Produto GetProdutos();
      Vendas GetVendas();

      void SetDepartamentos(Departamento Departamentos);
      void SetCargos(Cargo Cargos);
      void SetFuncionarios(Funcionario Funcionarios);
      void SetClientes(Cliente Clientes);
      void SetCategorias(Categoria Categorias);
      void SetEstoques(Estoque Estoques);
      void SetProdutos(Produto Produtos);
      void SetVendas(Vendas NovaVenda);     
  };

#endif