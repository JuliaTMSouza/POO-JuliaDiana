#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Cargo.hpp"
#include "Departamento.hpp"
#include "Admissao.hpp"
#include "Dissidio.hpp"

#include "Produto.hpp"              // FALTA A PARTE Q DEPENDE DO FORNECEDOR
#include "Valor.hpp"                //OK
#include "Date.hpp"                 //OK
//#include "Producao.hpp"
#include "Vendas.hpp"
#include "Orcamento.hpp"            //OK
//#include "OrcamentoProduto.hpp"
//#include "OrcamentoMaterial.hpp"  // ACHO Q N VAI PRECISAR
#include "MateriaPrima.hpp"         //OK
#include "Categoria.hpp"            //OK
#include "Lote.hpp"                 //OK
//#include "Estoque.hpp"
#include "Pagamentos.hpp"
#include "Boleto.hpp"
#include "Cartao.hpp"
#include "Fornecedor.hpp"           // INCOMPLETO

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
    Funcionario Jorge;
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

    Cargo Gerente;
    Gerente.SetEscopo("Acompanhar o trabalho dos desenvolvedores");
    Gerente.SetNome("Gerente Scrum");
    cout << Gerente.GetEscopo() << endl;
    cout << Gerente.GetNome() << endl;

    // Cargo *CargoJorge = &Gerente;
    Jorge.SetCargoAtual(Gerente);
    cout << Jorge.GetCargoAtual() << endl;

    Departamento Projetos;
    Projetos.SetNome("Projetos");
    Projetos.SetDescricao("Gerenciar a execução dos projetos vendidos pela empresa");

    // Departamento *DepartamentoJorge = &Projetos;
    Jorge.SetDepartamentoAtual(Projetos);
    cout << Jorge.GetDepartamentoAtual() << endl;

    // Jorge.SetCargoAtual(CargoJorge);

//     cout << ">>>> SAIDA" << endl;

//     Date aaa(2022, 9, 22);
//     cout << aaa.getData() << endl;

//     Categoria Cozinha;
//     Cozinha.SetNome("Cozinha");
//     cout << Cozinha.GetNome() << endl;

//     Valor preco;
//     preco.SetData(Date(2022, 6, 24));
//     preco.SetValor(25.99);
//     cout << preco.GetValor() << endl; 
//     cout << preco.GetData().getData() << endl;

//     Lote vamove();
//     Lote novoLote(10, Date(2022, 9, 23), 1);
//     cout << novoLote.GetDataProducao().getData() << " " << novoLote.GetNumeroLote() << " " << novoLote.GetQuantidade() << endl;

//     MateriaPrima mds;
//     cout << ">> " << mds.GetLoteAtual() << endl;

//     mds.SetEstoqueMinimo(20);
//     mds.SetEstoqueAtual(30);
//     mds.SetMedida("20 m");
//     mds.SetLotes(45, aaa);
//     mds.SetNome("madeira");

//     cout << mds.GetEstoqueAtual() << " ";
//     cout << mds.GetEstoqueMinimo() << " ";
//     cout << mds.GetLoteAtual() << " ";
//     cout << mds.GetLotes().begin()->GetNumeroLote() << " ";
//     cout << mds.GetNome() << " ";
//     cout << mds.GetMedida() << " ";
//     cout << "." << mds.GetUnidadeMedida() << ",\n" << endl;


//     Fornecedor chefe;
//     chefe.SetCPF_CNPJ("020.247.096-21", true);
//     chefe.SetEmail("dianarpereira2000@gmail.com");
//    // chefe.SetMateriasPrima(mds.GetLotes());
//     chefe.SetNome("Robson");
//    // chefe.SetPrecoMateriais

//     cout << chefe.GetCPF_CNPJ() << " ";
//     cout << chefe.GetEmail() << " ";
//     cout << chefe.GetNome() << "\n\n\n";

//     Produto novoProduto; 
//     cout << novoProduto.GetCodigoAtual() << "|" << novoProduto.GetLoteAtual() << "\n";

//     novoProduto.SetCategoria(Cozinha);
//     novoProduto.SetEstoqueAtual(10);
//     novoProduto.SetEstoqueMinimo(20);
//     novoProduto.SetLoteMinimo(50);
//     novoProduto.SetLote(60, Date(2022, 10, 13));
//     novoProduto.SetNomeProduto("Mesa");
//     novoProduto.SetValor(Valor(400, Date(2022, 10, 13)));

//     cout << novoProduto.GetCategoria().GetNome() << " ";
//     cout << novoProduto.GetEstoqueAtual() << " ";
//     cout << novoProduto.GetEstoqueMinimo() << " ";
//     cout << novoProduto.GetLoteMinimo() << " ";
//     cout << novoProduto.GetNomeProduto() << " >";
//     cout << novoProduto.GetLote().GetDataProducao().getData() << " ";
//     cout << novoProduto.GetLote().GetQuantidade() << " ";
//     cout << novoProduto.GetLote().GetNumeroLote() << " ";
//     cout << novoProduto.GetValor().GetValor() << " ";

//     Produto novoProduto2;
//     cout << novoProduto2.GetCodigoAtual() << "|" << novoProduto2.GetLoteAtual() << "\n";

//     novoProduto2.SetCategoria(Cozinha);
//     novoProduto2.SetEstoqueAtual(40);
//     novoProduto2.SetEstoqueMinimo(80);
//     novoProduto2.SetLoteMinimo(200);
//     novoProduto2.SetLote(60, Date(2022, 10, 24));
//     novoProduto2.SetNomeProduto("Cadeira");
//     novoProduto2.SetValor(Valor(400, Date(2022, 10, 24)));

//     cout << novoProduto2.GetCategoria().GetNome() << " ";
//     cout << novoProduto2.GetEstoqueAtual() << " ";
//     cout << novoProduto2.GetEstoqueMinimo() << " ";
//     cout << novoProduto2.GetLoteMinimo() << " ";
//     cout << novoProduto2.GetNomeProduto() << " >";
//     cout << novoProduto2.GetLote().GetDataProducao().getData() << " ";
//     cout << novoProduto2.GetLote().GetQuantidade() << " ";
//     cout << novoProduto2.GetLote().GetNumeroLote() << " ";
//     cout << novoProduto2.GetValor().GetValor() << " ";

//     cout << "\n\n O complexo:\n";

//     MateriaPrima mds1, mds2, mds3;
//     cout << ">> " << mds.GetLoteAtual() << endl;

//     mds1.SetEstoqueMinimo(20); mds1.SetEstoqueAtual(30); mds1.SetMedida("20 m"); mds1.SetLotes(45, aaa); mds1.SetNome("madeira");
//     mds2.SetEstoqueMinimo(2); mds2.SetEstoqueAtual(40); mds2.SetMedida("8 m"); mds2.SetLotes(45, aaa); mds2.SetNome("parafuso");
//     mds3.SetEstoqueMinimo(8); mds3.SetEstoqueAtual(8); mds3.SetMedida("9 m"); mds3.SetLotes(45, aaa); mds3.SetNome("perna");

//     //cout <<  "\n Produto: \n";
//     novoProduto.SetMateriasPrima(mds1);
//     novoProduto.SetMateriasPrima(mds2);
//     novoProduto.SetMateriasPrima(mds3);

//     novoProduto.SolicitarNovoLote(1, Date(2023, 1, 24));

//     //cout <<  "\n Produto2: \n";
//     novoProduto2.SetMateriasPrima(mds1);
//     novoProduto2.SetMateriasPrima(mds2);
//     novoProduto2.SetMateriasPrima(mds3);

//     novoProduto2.SolicitarNovoLote(5, Date(2023, 1, 24)); //funciona
    
//     Orcamento novoOrcamento(novoProduto, 7, Date(2023, 1, 24));
//     cout << "orcamento: " << novoOrcamento.GetValorTotal() << endl;

//     Boleto pagar1;
//     pagar1.SetNome("Robson");
//     pagar1.SetPrazo(60); //fazer o switch case
//     pagar1.SetTipo("Boleto");
//     pagar1.SetVencimento(Date(2023, 2, 24));

//     cout << pagar1.GetNome() << " ";
//     cout << pagar1.GetPrazo() << " ";
//     cout << pagar1.GetTipo() << " ";
//     cout << pagar1.GetVencimento().getData() << "\n";

//     Cartao pagar2;
//     pagar2.SetNome("Robdaugther");
//     pagar2.SetNumeroCartao("1234542395426541");
//     pagar2.SetParcelas(6); //fazer o switch case
//     pagar2.SetTipo("Cartao");
//     pagar2.SetValidade(Date(2023, 2, 24));

//     cout << ">>> " << pagar2.GetNome() << " ";
//     cout << pagar2.GetNumeroCartao() << " ";
//     cout << pagar2.GetParcelas() << " ";
//     cout << pagar2.GetTipo() << " ";
//     cout << pagar2.GetValidade().getData() << "\n";

    return 0;

}