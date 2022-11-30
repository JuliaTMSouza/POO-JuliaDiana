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
  #include "Veiculo.hpp"

  using namespace std;

  class Empresa {

    protected:
      Empresa() = default;
      list<Departamento> Departamentos;
      list<Cargo> Cargos;
      list<Funcionario> Funcionarios;
      list<Cliente> Clientes;
      list<Categoria> Categorias;
      list<Estoque> Estoques;
      list<Produto> Produtos;
      list<Orcamento> listaVendas;
      list<Orcamento> Compras; //colocar informações de compras de materiais?
      list<Veiculo> Veiculos;

    public:

      static Empresa& getInstancia()
      {
        static Empresa EmpresaCriada;
        return EmpresaCriada;
      };

      Empresa(const Empresa&) = delete;
      Empresa(Empresa&&) = delete;
      Empresa& operator=(const Empresa&) = delete;
      Empresa& operator=(Empresa&&) = delete;

      list<Departamento> GetDepartamentos();
      list<Cargo> GetCargos();
      list<Funcionario> GetFuncionarios();
      list<Cliente> GetClientes();
      list<Categoria> GetCategorias();
      list<Estoque> GetEstoques();
      list<Produto> GetProdutos();
      list<Orcamento> GetVendas();
      list<Veiculo> GetVeiculos();

      void SetDepartamentos(Departamento Departamentos);
      void SetCargos(Cargo Cargos);
      void SetFuncionarios(Funcionario Funcionarios);
      void SetClientes(Cliente Clientes);
      void SetCategorias(Categoria Categorias);
      void SetEstoques(Estoque Estoques);
      void SetProdutos(list<Produto> *Produtos);
      void SetVendas(Orcamento Compras);
      void SetCompras(Orcamento Compras);
      void SetVeiculos(Veiculo Veiculos);

      Produto AtualizaProdutos();
  };

#endif