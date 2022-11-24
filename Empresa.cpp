#include "Empresa.hpp"

using namespace std;


list<Departamento> Empresa::GetDepartamentos() {
    return this->Departamentos;
}

list<Cargo> Empresa::GetCargos() {
    return this->Cargos;
}

list<Funcionario> Empresa::GetFuncionarios() {
    return this->Funcionarios;
}

list<Cliente> Empresa::GetClientes() {
    return this->Clientes;
}

list<Categoria> Empresa::GetCategorias() {
    return this->Categorias;
}

list<Estoque> Empresa::GetEstoques() {
    return this->Estoques;
}

list<Produto> Empresa::GetProdutos() {
    return this->Produtos;
}

list<Vendas> Empresa::GetVendas() {
    return this->listaVendas;
}

void Empresa::SetDepartamentos(Departamento Departamentos) {
    this->Departamentos.push_back(Departamentos);
}

void Empresa::SetCargos(Cargo Cargos) {
    this->Cargos.push_back(Cargos);
}

void Empresa::SetFuncionarios(Funcionario Funcionarios) {
    this->Funcionarios.push_back(Funcionarios);
}

void Empresa::SetClientes(Cliente Clientes) {
    this->Clientes.push_back(Clientes);
}

void Empresa::SetCategorias(Categoria Categorias) {
    this->Categorias.push_back(Categorias);
}

void Empresa::SetEstoques(Estoque Estoques) {
    this->Estoques.push_back(Estoques);
}

void Empresa::SetProdutos(Produto Produtos) {
    this->Produtos.push_back(Produtos);
}

void Empresa::SetVendas(Vendas NovaVenda) {
    this->listaVendas.push_back(NovaVenda);
}

void Empresa::SetCompras(Orcamento Compras){
    this->Compras.push_back(Compras);
}