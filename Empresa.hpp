#ifndef EMPRESA_H
#define EMPRESA_H

  #include <string>
  #include <stdbool.h>
  #include <list>

  #include "Departamento.hpp"
  #include "Cargo.hpp"
  #include "Funcionario.hpp"
  #include "Cliente.hpp"
  #include "Categoria.hpp"
  #include "Estoque.hpp"
  #include "Produto.hpp"
  #include "Vendas.hpp"
  #include "Orcamento.hpp"

  using namespace std;

  class Empresa {
    private:
      Empresa();
      static bool EmpresaCriada;

    protected:
      list<Departamento> Departamentos;
      list<Cargo> Cargos;
      list<Funcionario> Funcionarios;
      list<Cliente> Clientes;
      list<Categoria> Categorias;
      list<Estoque> Estoques;
      list<Produto> Produtos;
      list<Vendas> listaVendas;
      list<Orcamento> Compras; //colocar informações de compras de materiais?

    public:
      bool ConfereEmpresa();

      list<Departamento> GetDepartamentos();
      list<Cargo> GetCargos();
      list<Funcionario> GetFuncionarios();
      list<Cliente> GetClientes();
      list<Categoria> GetCategorias();
      list<Estoque> GetEstoques();
      list<Produto> GetProdutos();
      list<Vendas> GetVendas();

      void SetDepartamentos(Departamento Departamentos);
      void SetCargos(Cargo Cargos);
      void SetFuncionarios(Funcionario Funcionarios);
      void SetClientes(Cliente Clientes);
      void SetCategorias(Categoria Categorias);
      void SetEstoques(Estoque Estoques);
      void SetProdutos(Produto Produtos);
      void SetVendas(Vendas NovaVenda);
      void SetCompras(Orcamento Compras);
  };

#endif