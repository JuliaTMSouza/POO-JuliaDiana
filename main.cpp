#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
// #include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Cargo.hpp"
#include "Departamento.hpp"
#include "Admissao.hpp"
#include "Dissidio.hpp"
//g++ main.cpp produto.cpp valor.cpp date.cpp vendas.cpp orcamento.cpp materiaprima.cpp categoria.cpp lote.cpp pagamentos.cpp boleto.cpp cartao.cpp fornecedor.cpp veiculo.cpp turno.cpp rota.cpp -o main

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
#include "Fornecedor.hpp"          // INCOMPLETO

#include "Veiculo.hpp"
#include "Turno.hpp"
#include "Rota.hpp"
#include "Empresa.hpp"

using namespace std;

        /*
        * Pensei em deixar em maiúsculo todas as referências às nossas classes
        e minúsculo para outras variáveis
        */

int main()
{

    //CRIANDO EMPRESA
    //Empresa &Colchobel = Empresa::getInstancia();
    
    // Exemplo de construtor 
    // Cargo novoCar = Cargo() ;
    // novoCar.SetNome("Vendedor");
    // novoCar.SetEscopo("Cuidar da precificação de projetos e negociação com os clientes");
    // Funcionario Jorge;
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
    // Jorge.SetCargoAtual(Gerente);
    // cout << Jorge.GetCargoAtual() << endl;

    // Departamento Projetos;
    // Projetos.SetNome("Projetos");
    // Projetos.SetDescricao("Gerenciar a execução dos projetos vendidos pela empresa");

    // Departamento *DepartamentoJorge = &Projetos;
    // Jorge.SetDepartamentoAtual(Projetos);
    // cout << Jorge.GetDepartamentoAtual() << endl;

    // Jorge.SetCargoAtual(CargoJorge);

    // Date Data(2022, 10, 9, 14, 50);
    // cout << Data.getDia() << endl;
    // Admissao AdmissaoJorge;
    // AdmissaoJorge.SetDataAdmissao(Data);
    // cout << AdmissaoJorge.GetDataAdmissao().getDia() << endl;
    // Jorge.SetAdmissaoDemissao(AdmissaoJorge);
    // cout << Jorge.GetAdmissaoDemissao() << endl;


/*

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
    Lote novoLote(10, Date(2022, 9, 23), 1, 0);
    cout << novoLote.GetDataProducao().getData() << " " << novoLote.GetNumeroLote() << " " << novoLote.GetQuantidade() << endl;

     MateriaPrima mds;
     cout << ">> " << mds.GetLoteAtual() << endl;

    mds.SetEstoqueMinimo("20 m2");
    mds.SetEstoqueAtual(30);
    mds.SetMedida("20 m");
    mds.SetLotes(45, aaa, 0);
    mds.SetNome("madeira");

     cout << mds.GetEstoqueAtual() << " ";
     cout << mds.GetEstoqueMinimo() << " ";
     cout << mds.GetLoteAtual() << " ";
     cout << mds.GetLotes().begin()->GetNumeroLote() << " ";
     cout << mds.GetNome() << " ";
     cout << mds.GetMedida() << " ";
     cout << "." << mds.GetUnidadeMedida() << ",\n" << endl;


    Fornecedor chefe; //"020.247.096-21"
    chefe.SetCPF_CNPJ("02024709621", true);
    chefe.SetEmail("dianarpereira2000@gmail.com");
    //chefe.SetMateriasPrima(mds.GetLotes());
    chefe.SetNome("Robson");
    //chefe.SetPrecoMateriais

     cout << chefe.GetCPF_CNPJ() << " ";
     cout << chefe.GetEmail() << " ";
     cout << chefe.GetNome() << "\n\n\n";

    Produto novoProduto(0); 
    cout << novoProduto.GetCodigoAtual() << "|" << novoProduto.GetLoteAtual() << "\n";

    novoProduto.SetCategoria(Cozinha);
    novoProduto.SetEstoqueAtual(10);
    novoProduto.SetEstoqueMinimo(20);
    novoProduto.SetLote(60, Date(2022, 10, 13), 0);
    novoProduto.SetNomeProduto("Mesa");
    novoProduto.SetValor(Valor(400, Date(2022, 10, 13)));

    cout << novoProduto.GetCategoria().GetNome() << " ";
    cout << novoProduto.GetEstoqueAtual() << " ";
    cout << novoProduto.GetEstoqueMinimo() << " ";
    cout << novoProduto.GetNomeProduto() << " >";
    cout << novoProduto.GetLote().GetDataProducao().getData() << " ";
    cout << novoProduto.GetLote().GetQuantidade() << " ";
    cout << novoProduto.GetLote().GetNumeroLote() << " ";
    cout << novoProduto.GetValor().GetValor() << " ";

    Produto novoProduto2(0);
    cout << novoProduto2.GetCodigoAtual() << "|" << novoProduto2.GetLoteAtual() << "\n";

    novoProduto2.SetCategoria(Cozinha);
    novoProduto2.SetEstoqueAtual(40);
    novoProduto2.SetEstoqueMinimo(80);;
    novoProduto2.SetLote(60, Date(2022, 10, 24), 0);
    novoProduto2.SetNomeProduto("Cadeira");
    novoProduto2.SetValor(Valor(400, Date(2022, 10, 24)));

    cout << novoProduto2.GetCategoria().GetNome() << " ";
    cout << novoProduto2.GetEstoqueAtual() << " ";
    cout << novoProduto2.GetEstoqueMinimo() << " ";
    cout << novoProduto2.GetNomeProduto() << " >";
    cout << novoProduto2.GetLote().GetDataProducao().getData() << " ";
    cout << novoProduto2.GetLote().GetQuantidade() << " ";
    cout << novoProduto2.GetLote().GetNumeroLote() << " ";
    cout << novoProduto2.GetValor().GetValor() << " ";

     cout << "\n\n O complexo:\n";

     MateriaPrima mds1, mds2, mds3;
     cout << ">> " << mds.GetLoteAtual() << endl;

    mds1.SetEstoqueMinimo("20 m2"); mds1.SetEstoqueAtual(30); mds1.SetMedida("20 m"); mds1.SetLotes(45, aaa, 0); mds1.SetNome("madeira");
    mds2.SetEstoqueMinimo("2 m"); mds2.SetEstoqueAtual(40); mds2.SetMedida("8 m"); mds2.SetLotes(45, aaa, 0); mds2.SetNome("parafuso");
    mds3.SetEstoqueMinimo("8 g"); mds3.SetEstoqueAtual(8); mds3.SetMedida("9 m"); mds3.SetLotes(45, aaa, 0); mds3.SetNome("perna");

     //cout <<  "\n Produto: \n";
     novoProduto.SetMateriasPrima(mds1);
     novoProduto.SetMateriasPrima(mds2);
     novoProduto.SetMateriasPrima(mds3);

     novoProduto.SolicitarNovoLote(1, Date(2023, 1, 24));

     //cout <<  "\n Produto2: \n";
     novoProduto2.SetMateriasPrima(mds1);
     novoProduto2.SetMateriasPrima(mds2);
     novoProduto2.SetMateriasPrima(mds3);

    novoProduto2.SolicitarNovoLote(5, Date(2023, 1, 24)); //funciona

    Orcamento novoOrcamento(&novoProduto, 7, Date(2023, 1, 24));
    cout << "orcamento: " << novoOrcamento.GetValorTotal() << endl;

     Boleto pagar1;
     pagar1.SetNome("Robson");
     pagar1.SetPrazo(60); //fazer o switch case
     pagar1.SetTipo("Boleto");
     pagar1.SetVencimento(Date(2023, 2, 24));

     cout << pagar1.GetNome() << " ";
     cout << pagar1.GetPrazo() << " ";
     cout << pagar1.GetTipo() << " ";
     cout << pagar1.GetVencimento().getData() << "\n";

     Cartao pagar2;
     pagar2.SetNome("Robdaugther");
     pagar2.SetNumeroCartao("1234542395426541");
     pagar2.SetParcelas(6); //fazer o switch case
     pagar2.SetTipo("Cartao");
     pagar2.SetValidade(Date(2023, 2, 24));

    cout << ">>> " << pagar2.GetNome() << " ";
    cout << pagar2.GetNumeroCartao() << " ";
    cout << pagar2.GetParcelas() << " ";
    cout << pagar2.GetTipo() << " ";
    cout << pagar2.GetValidade().getData() << "\n";

    Vendas novaVenda;
    //novaVenda.SetDadosCliente();
    novaVenda.SetDadosProduto(&novoProduto);
    novaVenda.SetData(Date(2023, 2, 24));
    novaVenda.SetLotePeriodoVenda(novoProduto.GetLote());
    novaVenda.SetOrcamentoAtual(&novoOrcamento);
    novaVenda.SetQuantidade(3);
    novaVenda.SetTipoPagamento(&pagar2);

    cout << novaVenda.GetDadosProduto().GetNomeProduto() << " ";
    cout << novaVenda.GetData().getData() << " ";
    cout << novaVenda.GetLotePeriodoVenda().GetNumeroLote() << " ";
    cout << novaVenda.GetOrcamentoAtual().GetValorTotal() << " ";
    cout << novaVenda.GetQuantidade() << " ";
    cout << novaVenda.GetTipoPagamento().GetTipo() << " ";

    MateriaPrima Mad, Plastc, Alumn, Paraf;
    cout << "\n\n\n\n>> " << endl;

    Mad.SetEstoqueMinimo("1 Kg"); Mad.SetEstoqueAtual(1000); Mad.SetMedida("450 g"); Mad.SetLotes(20, Date(2022, 11, 21), 0); Mad.SetNome("Mad");
    Plastc.SetEstoqueMinimo("1 Kg"); Plastc.SetEstoqueAtual(1000); Plastc.SetMedida("150 g"); Plastc.SetLotes(20, Date(2022, 11, 21), 0); Plastc.SetNome("Plastc");
    Alumn.SetEstoqueMinimo("1 Kg"); Alumn.SetEstoqueAtual(1000); Alumn.SetMedida("100 g"); Alumn.SetLotes(20, Date(2022, 11, 21), 0); Alumn.SetNome("Alumn");
    Paraf.SetEstoqueMinimo("20 unidades"); Paraf.SetEstoqueAtual(20); Paraf.SetMedida("8 unidades"); Paraf.SetLotes(20, Date(2022, 11, 21), 0); Paraf.SetNome("Paraf");

    chefe.SetMateriasPrima(Mad, Valor(200, Date(2022, 11, 24)));
    chefe.SetMateriasPrima(Alumn, Valor(200, Date(2022, 11, 24)));
    chefe.SetMateriasPrima(Paraf, Valor(200, Date(2022, 11, 24)));
    chefe.SetMateriasPrima(Plastc, Valor(200, Date(2022, 11, 24)));

    chefe.AtualizaPrecoMateriais(Mad, Valor(50, Date(2022, 11, 24)));

    Produto outraMesa(0);
    outraMesa.SetMateriasPrima(Mad);
    outraMesa.SetMateriasPrima(Plastc);
    outraMesa.SetMateriasPrima(Alumn);
    outraMesa.SetMateriasPrima(Paraf);

    cout << outraMesa.GetCodigoAtual() << "|" << outraMesa.GetLoteAtual() << "\n";

    outraMesa.SetCategoria(Cozinha);
    outraMesa.SetEstoqueAtual(0);
    outraMesa.SetEstoqueMinimo(20);
    //outraMesa.SetLote(60, Date(2022, 10, 24));
    outraMesa.SetNomeProduto("outraMesa");
    outraMesa.SetValor(Valor(120.29, Date(2022, 11, 21)));
    outraMesa.SetFornecedores(&chefe);
    
    cout << outraMesa.GetCategoria().GetNome() << " ";
    cout << outraMesa.GetEstoqueAtual() << " ";
    cout << outraMesa.GetEstoqueMinimo() << " ";
    cout << outraMesa.GetNomeProduto() << " >";
    //cout << outraMesa.GetLote().GetDataProducao().getData() << " ";
    //cout << outraMesa.GetLote().GetNumeroLote() << " ";
    cout << outraMesa.GetValor().GetValor() << "\n==\n";

    outraMesa.SolicitarNovoLote(1, Date(2022, 11, 21));
    cout << outraMesa.GetLote().GetNumeroLote() << " " << outraMesa.GetCodigoAtual() << endl;

    outraMesa.SolicitarNovoLote(2, Date(2022, 11, 21));
    cout << outraMesa.GetLote().GetNumeroLote() << " " << novoProduto2.GetCodigoAtual() << endl;

    outraMesa.SolicitarNovoLote(1, Date(2022, 11, 21));
    cout << outraMesa.GetLote().GetNumeroLote() << " " << novoProduto.GetCodigoAtual() << endl;



    Turno novoTurno; // DEVE FICAR DENTRO DE PESSOA
    novoTurno.SetPeriodo(1);
    novoTurno.SetHorarioPartida(250);
    cout << novoTurno.GetHorarioPartida() << " " << novoTurno.GetPeriodo() << endl;
    
    Rota novaRota;
    novaRota.SetTempoEmbarque(260);
    novaRota.SetTurnos(novoTurno);
    novaRota.SetRotaRealizada("Descreve caminho seguido em coordenadas.");
    cout << novaRota.GetTempoEmbarque() << " "
    << novaRota.GetTurnos().GetHorarioPartida() << " " << endl;
    //list<string> aa2 = novaRota.GetRotaRealizada();
    //string opoha = *novaRota.GetRotaRealizada().begin();
    cout << *novaRota.GetRotaRealizada().begin() << endl;

    Veiculo novoOnibus;
    novoOnibus.SetPlaca(450);
    novoOnibus.SetRotas(novaRota);
    cout << novoOnibus.GetPlaca() << " " << novoOnibus.GetRotas().begin()->GetTurnos().GetHorarioPartida() << "\n\n" << endl;

    
    outraMesa.SetFornecedores(&chefe);

    Fornecedor head;
    head.SetMateriasPrima(Mad, Valor(10, Date(2022, 11, 24)));
    head.SetMateriasPrima(Alumn, Valor(10, Date(2022, 11, 24)));
    head.SetMateriasPrima(Plastc, Valor(10, Date(2022, 11, 24)));
    head.SetMateriasPrima(Paraf, Valor(10, Date(2022, 11, 24)));

    outraMesa.SetFornecedores(&head);

    outraMesa.SolicitarNovoLote(100, Date(2022, 11, 24));
    //outraMesa.SolicitarNovoLote(2, Date(2022, 11, 24));

    */




    return 0;

}