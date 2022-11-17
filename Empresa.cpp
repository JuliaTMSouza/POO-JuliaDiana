#include "Empresa.hpp"

using namespace std;

bool Empresa::ConfereEmpresa(){
    return this->EmpresaCriada;
}

Empresa::Empresa(){
    bool isEmpresa = ConfereEmpresa();
    if (!isEmpresa)  return this->EmpresaCriada = true;
}

Departamento Empresa::GetDepartamentos() {
    return this->Departamentos;
}

Cargo Empresa::GetCargos() {
    return this->Cargos;
}

Funcionario Empresa::GetFuncionarios() {
    return this->Funcionarios;
}

Cliente Empresa::GetClientes() {
    return this->Clientes;
}

Categoria Empresa::GetCategorias() {
    return this->Categorias;
}

Estoque Empresa::GetEstoques() {
    return this->Estoques;
}

Produto Empresa::GetProdutos() {
    return this->Produtos;
}

Vendas Empresa::GetVendas() {
    return this->ListaVendas;
}

void Empresa::SetDepartamentos(Departamento Departamentos) {
    this->Departamentos = Departamentos;
}

void Empresa::SetCargos(Cargo Cargos) {
    this->Cargos = Cargos;
}

void Empresa::SetFuncionarios(Funcionario Funcionarios) {
    this->Funcionarios = Funcionarios;
}

void Empresa::SetClientes(Cliente Clientes) {
    this->Clientes = Clientes;
}

void Empresa::SetCategorias(Categoria Categorias) {
    this->Categorias = Categorias;
}

void Empresa::SetEstoques(Estoque Estoques) {
    this->Estoques = Estoques;
}

void Empresa::SetProdutos(Produto Produtos) {
    this->Produtos = Produtos;
}

void Empresa::SetVendas(Vendas NovaVenda) {
    this->ListaVendas = NovaVenda;
}

