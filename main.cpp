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
//#include "Producao.hpp"
#include "Vendas.hpp"
#include "Orcamento.hpp"
#include "OrcamentoProduto.hpp"
#include "OrcamentoMaterial.hpp"
#include "MateriaPrima.hpp"
#include "Categoria.hpp"
#include "Lote.hpp"
//#include "Estoque.hpp"
//#include "Pagamentos.hpp"
//#include "Boleto.hpp"
//#include "Cartao.hpp"
#include "Fornecedor.hpp"

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
    preco.SetData(Date(2022, 6, 24));
    preco.SetValor(25.99);
    cout << preco.GetValor() << endl; 
    cout << preco.GetData().getData() << endl;

    Lote vamove();
    Lote novoLote(10, Date(2022, 9, 23), 1);
    cout << novoLote.GetDataProducao().getData() << " " << novoLote.GetNumeroLote() << " " << novoLote.GetQuantidade() << endl;

    MateriaPrima mds;
    cout << ">> " << mds.GetLoteAtual() << endl;

    mds.SetEstoqueMinimo(20);
    mds.SetEstoqueAtual(30);
    mds.SetMedida("20 m");
    mds.SetLotes(45, aaa);
    mds.SetNome("madeira");


    cout << mds.GetEstoqueAtual() << " ";
    cout << mds.GetEstoqueMinimo() << " ";
    cout << mds.GetLoteAtual() << " ";
    cout << mds.GetLotes().begin()->GetNumeroLote() << " ";
    cout << mds.GetNome() << " ";
    cout << mds.GetMedida() << " ";
    cout << "." << mds.GetUnidadeMedida() << ",\n" << endl;

    Fornecedor chefe;
    chefe.SetCPF_CNPJ("020.247.096-21", true);
    chefe.SetEmail("dianarpereira2000@gmail.com");
   // chefe.SetMateriasPrima(mds.GetLotes());
    chefe.SetNome("Robson");
   // chefe.SetPrecoMateriais

    cout << chefe.GetCPF_CNPJ() << " ";
    cout << chefe.GetEmail() << " ";
    cout << chefe.GetNome() << "\n\n\n";

    Produto novoProduto; 
    cout << novoProduto.GetCodigoAtual() << "|" << novoProduto.GetLoteAtual() << "\n";

    novoProduto.SetCategoria(Cozinha);
    novoProduto.SetEstoqueAtual(10);
    novoProduto.SetEstoqueMinimo(20);
    novoProduto.SetLoteMinimo(50);
    novoProduto.SetLote(60, Date(2022, 10, 13));
    novoProduto.SetNomeProduto("Mesa");
    novoProduto.SetValor(Valor(400, Date(2022, 10, 13)));

    cout << novoProduto.GetCategoria().GetNome() << " ";
    cout << novoProduto.GetEstoqueAtual() << " ";
    cout << novoProduto.GetEstoqueMinimo() << " ";
    cout << novoProduto.GetLoteMinimo() << " ";
    cout << novoProduto.GetNomeProduto() << " ";
    cout << novoProduto.GetLote().GetNumeroLote() << " ";
    cout << novoProduto.GetValor().GetValor() << "\n\n";


    Produto novoProduto2;
    cout << novoProduto2.GetCodigoAtual() << "|" << novoProduto2.GetLoteAtual() << "\n";

    novoProduto2.SetCategoria(Cozinha);
    novoProduto2.SetEstoqueAtual(10);
    novoProduto2.SetEstoqueMinimo(20);
    novoProduto2.SetLoteMinimo(50);
    novoProduto2.SetLote(60, Date(2022, 10, 13));
    novoProduto2.SetNomeProduto("Mesa");
    novoProduto2.SetValor(Valor(400, Date(2022, 10, 13)));

    cout << novoProduto2.GetCategoria().GetNome() << " ";
    cout << novoProduto2.GetEstoqueAtual() << " ";
    cout << novoProduto2.GetEstoqueMinimo() << " ";
    cout << novoProduto2.GetLoteMinimo() << " ";
    cout << novoProduto2.GetNomeProduto() << " >";
    cout << novoProduto2.GetLote().GetDataProducao().getData() << " ";
    cout << novoProduto2.GetLote().GetQuantidade() << " ";
    cout << novoProduto2.GetLote().GetNumeroLote() << " ";
    cout << novoProduto2.GetValor().GetValor() << " ";


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