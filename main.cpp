#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Cargo.hpp"
#include "Departamento.hpp"
#include "Admissao.hpp"
#include "Dissidio.hpp"

#include "Produto.hpp"
#include "Valor.hpp"
#include "Date.hpp"
#include "Producao.hpp"
#include "Vendas.hpp"
#include "Orcamento.hpp"
#include "OrcamentoProduto.hpp"
#include "OrcamentoMaterial.hpp"
#include "MateriaPrima.hpp"
#include "Categoria.hpp"
#include "Lote.hpp"
//#include "Estoque.hpp"
#include "Pagamentos.hpp"
#include "Boleto.hpp"
#include "Cartao.hpp"

using namespace std;

        /*
        * Pensei em deixar em maiúsculo todas as referências às nossas classes
        e minúsculo para outras variáveis
        */

int main()
{
    // Exemplo de construtor 
    // Cargo novoCar = Cargo() ;
    // novoCar.SetNome("Vendedor");
    // novoCar.SetEscopo("Cuidar da precificação de projetos e negociação com os clientes");
    //Funcionario Jorge;
    // Jorge.SetNome("Jorge");
    // Jorge.SetEmail("jorge@gmail.com.br");
    // Jorge.SetMatricula("JorgeLima");
    // Jorge.SetEndereco("Rua entre as árvores, 47");
    //Jorge.SetCPF_CNPJ("11111111111", 1);
    // cout << Jorge.GetNome() << endl;
    // cout << Jorge.GetEmail() << endl;
    // cout << Jorge.GetMatricula() << endl;
    // cout << Jorge.GetEndereco() << endl;
    // cout << Jorge.GetCPF_CNPJ() << endl;

    // Cargo Gerente;
    // Gerente.SetEscopo("Acompanhar o trabalho dos desenvolvedores");
    // Gerente.SetNome("Gerente Scrum");
    // cout << Gerente.GetEscopo() << endl;
    // cout << Gerente.GetNome() << endl;

    // Cargo *CargoJorge = &Gerente;
    // Jorge.SetCargoAtual(CargoJorge);
    // cout << Jorge.GetCargoAtual() << endl;

    // Departamento Projetos;
    // Projetos.SetNome("Projetos");
    // Projetos.SetDescricao("Gerenciar a execução dos projetos vendidos pela empresa");

    // Departamento *DepartamentoJorge = &Projetos;
    // Jorge.SetDepartamentoAtual(DepartamentoJorge);
    // cout << Jorge.GetDepartamentoAtual() << endl;



    // Jorge.SetCargoAtual(CargoJorge);

    cout << ">>>> SAIDA" << endl;

    Date aaa(2022, 9, 22);
    cout << aaa.getData() << endl;

    Categoria Cozinha;
    Cozinha.SetNome("Cozinha");
    cout << Cozinha.GetNome() << endl;

    Valor preco;
    preco.SetData(Date(2022, 9, 23));
    preco.SetValor(25.99);
    cout << preco.GetValor() << endl; 
    cout << preco.GetData().getData() << endl;

    Lote vamove();
    Lote novoLote(10, Date(2022, 9, 23), 1);
    cout << novoLote.GetDataProducao().getData() << " " << novoLote.GetNumeroLote() << " " << novoLote.GetQuantidade() << endl;

    MateriaPrima mds;
    mds.SetEstoqueAtual()


    //Produto Mesa = {};
    //Valor preco;
    //Vendas caraio;
    
    //preco.SetData(data);
    //preco.SetValor(50.30);

    //cout << preco.GetValor() << endl;

    /*
    Mesa.SetLoteMinimo(20);
    cout << Mesa.GetLoteMinimo() << endl;

    Mesa.SetValor(preco);
    cout << Mesa.GetValor().GetValor() << " e " << Mesa.GetValor().GetData().getData() << endl;
    */   


    return 0;

}