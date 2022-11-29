#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <time.h>
#include <locale.h>

#include "Pessoa.hpp"
#include "Funcionario.hpp"  //OK 
#include "Cliente.hpp"
#include "Cargo.hpp"           //OK
#include "Departamento.hpp"    //OK
#include "Admissao.hpp"        //OK
#include "Dissidio.hpp"
//g++ main.cpp empresa.cpp produto.cpp valor.cpp date.cpp formato.cpp vendas.cpp orcamento.cpp materiaprima.cpp categoria.cpp lote.cpp pagamentos.cpp boleto.cpp cartao.cpp pessoa.cpp fornecedor.cpp veiculo.cpp turno.cpp rota.cpp logado.cpp permissao.cpp -o main

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
#include "Logado.hpp"

using namespace std;
float denSort = 100;

        /*
        * Pensei em deixar em maiúsculo todas as referências às nossas classes
        e minúsculo para outras variáveis
        */

int strparaint(string valor){
    char cvalor[5];
    float ivalor = 0;
    strcpy(cvalor, valor.c_str());

    for(int i = 0; i < valor.length(); i++){
        ivalor *= 10;
        ivalor += (int) cvalor[i] - 48;
    }

    return ivalor;
}

void cadastrarPessoas(Empresa *empresa){

}

void cadastrarMaterial(Produto *produto, Date data){
    MateriaPrima novoMaterial;
    list<Fornecedor> listaFornecedores;
    string auxString, nome = "", unEstoque = "", vlEstoque = "", estoque = "", unMedida = "", vlMedida = "", medida = "";

    float numeroSorteado, vlProduto = 0;
    string novo = "S";

    while( !(novo == "N" || novo == "n") ){
        //cout << novo << endl;
        
        listaFornecedores = produto->GetFornecedores();

        cout << "  Nome do Material: "; cin >> nome;
        novoMaterial.SetNome(nome);

        cout << "  Estoque minimo: "; cin >> vlEstoque; cin >> unEstoque;
        estoque = vlEstoque + " " + unEstoque;
        novoMaterial.SetEstoqueMinimo(estoque);
        //cout << estoque << " " << novoMaterial.GetEstoqueMinimo() << endl;

        cout << "  Medida: "; cin >> vlMedida; cin >> unMedida;
        medida = vlMedida + " " + unMedida;
        novoMaterial.SetMedida(medida);
        //cout << medida << " " << novoMaterial.GetMedida() << endl;

        float maior, menor;
        for(list<Fornecedor>::iterator positFornecedor = listaFornecedores.begin(); positFornecedor != listaFornecedores.end(); positFornecedor++){
            srand(denSort);
            denSort++;
            if(novoMaterial.GetUnidadeMedida() == "unidade") {
                maior = 50;
                menor = 0.4;
            }
            else {
                maior = 20;
                menor = 10;
            }

            numeroSorteado = (rand() / denSort);
            while(numeroSorteado < menor || numeroSorteado > maior) numeroSorteado = (rand() / denSort);
            positFornecedor->SetMateriasPrima(novoMaterial, Valor(numeroSorteado, data));
            
        }
        produto->SetFornecedores(&listaFornecedores);
        //cout << "tamanho fornecedores out " << listaFornecedores.size() << endl;
        //cout << "->" << produto->GetFornecedores().begin()->GetPrecoMateriais().begin()->GetValor() << endl;
        novo = "";
        cout << "Cadastrar novo material? (S/N) "; cin >> novo;
        //cout << novo << endl;
        novoMaterial.SetEstoqueAtual(0);
        produto->SetMateriasPrima(novoMaterial);
        //produto->SetEstoqueAtual(0);
    }
}

 void cadastrarProdutos(Empresa *empresa, Date data, list<Fornecedor> fornecedores){
     Produto novoProduto;
     string auxString, novo = "S";
     float auxFloat;
     int auxInt;
     bool auxBool;

     while( !(novo == "N" || novo == "n") ){
        novo = "";
        cout << "Nome do produto: "; cin >> auxString;
        novoProduto.SetNomeProduto(auxString);

        cout << "Categoria do produto: (como fazer?)" << endl;
        //novoProduto.SetCategoria();

        cout << "Estoque minimo: "; cin >> auxFloat;
        novoProduto.SetEstoqueMinimo(auxFloat);

        novoProduto.SetFornecedores(&fornecedores);

        cout << "Cadastrar materias primas:\n";
        cadastrarMaterial(&novoProduto, data);
        //cout << fornecedores.size() << "\nfinalizou";
        
        auxInt = (int) auxFloat;
        //cout << auxInt;
        novoProduto.SolicitarNovoLote(auxInt, data);
        //cout << "hum";
        empresa->SetProdutos(novoProduto);
        //cout << "total de mesas produzidas no final do trem: " << novoProduto.GetEstoqueAtual();

        novo = "";
        cout << "-> Cadastrar novo produto? (S/N) "; cin >> novo;
        //cout << "\n\nfinalizou";
    }

}

void cadastrarFornecedores(list<Fornecedor> *fornecedor){
    Fornecedor novoFornecedor;

    novoFornecedor.SetNome("Fornecedor 1");
    fornecedor->push_back(novoFornecedor);

    novoFornecedor.SetNome("Fornecedor 2");
    fornecedor->push_back(novoFornecedor);

    novoFornecedor.SetNome("Fornecedor 3");
    fornecedor->push_back(novoFornecedor);

    novoFornecedor.SetNome("Fornecedor 4");
    fornecedor->push_back(novoFornecedor);
}

void cadastrarVeiculos(Empresa *empresa){

}

void cadastrarRotas(Empresa *empresa){

}

void gestaoCadastros(Empresa *empresa){

}

Orcamento testeOrcamento;

void compra(Empresa *empresa, Date data, list<Fornecedor> *fornecedores){

    //cout << "\n\n\n";
    //cout << empresa->GetProdutos().begin()->GetEstoqueAtual() << " " << testeOrcamento.GetQuantidade() << " " << empresa->GetProdutos().begin()->GetEstoqueMinimo();
    //cout << "\n\n\n";
    if((empresa->GetProdutos().begin()->GetEstoqueAtual() - testeOrcamento.GetQuantidade()) < empresa->GetProdutos().begin()->GetEstoqueMinimo()){
        cout << "Estoque insuficiente. Avisaremos quando tiver novos produtos." << endl;
        //list<Fornecedor>::iterator positFornecedores = fornecedores->begin()
        /*int i = 0;
        list<Fornecedor>::iterator positFornecedores = empresa->GetProdutos().begin()->GetFornecedores().begin();
        for(; positFornecedores != empresa->GetProdutos().begin()->GetFornecedores().end(); positFornecedores++){
            positFornecedores->AtualizaPrecoMateriais(data);
            positFornecedores->RealizarOrcamento //VER OQ Q ROLA COM ESSE AQUI
            i ++;
        }
        empresa->GetProdutos().begin()->SetFornecedores(fornecedores);*/
        float novoValor = empresa->GetProdutos().begin()->GetValor().GetValor();

        empresa->GetProdutos().begin()->SetValor(Valor((novoValor * 1.05), data));

        empresa->GetProdutos().begin()->SolicitarNovoLote(testeOrcamento.GetQuantidade(), data);
        cout << "O produto que voce deseja esta disponivel em estoque, mas seu valor foi atualizado. Realize um novo orcamento." << endl;
        empresa->GetProdutos().begin()->SetEstoqueAtual(testeOrcamento.GetQuantidade());
        //cout << empresa->GetProdutos().begin()->GetEstoqueAtual();

        //cout << "\n\n\n";
    }
    else{
        cout << "Pedido adquirido. Obrigado pela preferencia!" << endl;
    }

}

bool orcamento(Empresa *empresa, Date data, list<Fornecedor> fornecedores){ //trocar a entrada pela pessoa logada
    int quantidade;
    string comprar = "";

    cout << "Qual quantia de " << empresa->GetProdutos().begin()->GetNomeProduto() << " voce deseja comprar? ";
    cin >> quantidade;

    Produto produtoAtual;
    produtoAtual.SetCategoria(empresa->GetProdutos().begin()->GetCategoria());
    Date dataLote(empresa->GetProdutos().begin()->GetLote().GetDataProducao().getAno(), empresa->GetProdutos().begin()->GetLote().GetDataProducao().getMes(), empresa->GetProdutos().begin()->GetLote().GetDataProducao().getDia());
    produtoAtual.SetLote(empresa->GetProdutos().begin()->GetLote().GetQuantidade(), dataLote, empresa->GetProdutos().begin()->GetLote().GetValorDeCompra());
    produtoAtual.SetEstoqueAtual(empresa->GetProdutos().begin()->GetEstoqueAtual());
    produtoAtual.SetValor(empresa->GetProdutos().begin()->GetValor());
    produtoAtual.SetFornecedores(&fornecedores);

    Orcamento novoOrcamento(produtoAtual, quantidade, data);

    testeOrcamento = novoOrcamento;

    cout << "O pedido de " << quantidade << " " << empresa->GetProdutos().begin()->GetNomeProduto() << "(s) ficara em R$"
    << novoOrcamento.GetValorTotal() << ".\nDeseja finalizar a compra? (S/N) ";
    cin >> comprar;

    if(comprar == "S" || comprar == "s") return true;
    if(comprar == "N" || comprar == "n") cout << "Volte sempre!" << endl;

    return false;
}

int main()
{
    setlocale(LC_ALL, "");
    //CRIANDO EMPRESA
    // //Empresa &Colchobel = Empresa::getInstancia();

    //CRIANDO LOGADO
    Logado &Jorge = Logado::getInstancia();
    Permissao PermissaoJorge;
    PermissaoJorge.SetNaoPermitido("ExcluirFuncionario");
    Permissao *PermissaoJorge1 = &PermissaoJorge;
    Jorge.SetPermissoes(PermissaoJorge);
    cout << Jorge.VerificarPermissao("ExcluirFuncionario") << endl;
    // Logado &Alexandre = Logado::getInstancia();
    // cout << PermissaoJorge.VerificarPermissao(Alexandre.GetPermissoes(), "ExcluirFuncionario") << endl;

    {//CADASTRANDO FUNCIONARIO
    // Funcionario Jorge;
    // Jorge.SetNome("Jorge");
    // Jorge.SetEmail("jorge@gmail.com.br");
    // Jorge.SetPermissoes(PermissaoJorge1);
    // Jorge.SetMatricula("JorgeLima");
    // Jorge.SetEndereco("Rua entre as árvores, 47");
    // Jorge.SetCPF_CNPJ("13873357666", 1);
    // cout << Jorge.GetNome() << endl;
    // cout << Jorge.GetEmail() << endl;
    // cout << Jorge.GetMatricula() << endl;
    // cout << Jorge.GetEndereco() << endl;
    // cout << Jorge.GetCPF_CNPJ() << endl;

    // cout << "Saídas" << endl;


    // Cargo Gerente;
    // Gerente.SetEscopo("Acompanhar o trabalho dos desenvolvedores");
    // Gerente.SetNome("Gerente Scrum");

    // Cargo *CargoJorge = &Gerente;
    // Jorge.SetCargoAtual(Gerente);
    // cout << Jorge.GetCargoAtual() << endl;

    // Departamento Projetos;
    // Projetos.SetNome("Projetos");

    // Departamento *DepartamentoJorge = &Projetos;

    // Date NascimentoJorge;
    // NascimentoJorge.setAno(1975);
    // NascimentoJorge.setMes(3);
    // NascimentoJorge.setDia(4);

    // Date *NascimentoJorge1 = &NascimentoJorge;

    // Admissao AdmissaoJorge;
    // AdmissaoJorge.SetDataAdmissao(NascimentoJorge);

    // Admissao *AdmissaoJorge1 = &AdmissaoJorge;

    // Salario SalarioJorge;
    // SalarioJorge.SetValor(1750);
    // SalarioJorge.SetDescricao("Admisao");
    // SalarioJorge.SetDataSalario(NascimentoJorge);

    // Salario *SalarioJorge1 = &SalarioJorge;

    // Jorge.SetNascimento(NascimentoJorge1);
    // Jorge.SetCargoAtual(CargoJorge);
    // Jorge.SetDepartamentoAtual(DepartamentoJorge);
    // Jorge.SetAdmissaoDemissao(AdmissaoJorge);
    // Jorge.SetSalarios(SalarioJorge);

    // cout << Jorge.GetCargoAtual()->GetEscopo() << endl;
    // cout << Jorge.GetDepartamentoAtual()->GetNome() << endl;
    // list<Admissao>::iterator it;
    // list<Admissao> AdmissaoDemissaoJorge = Jorge.GetAdmissaoDemissao();
    // for (it = AdmissaoDemissaoJorge.begin(); it != AdmissaoDemissaoJorge.end(); it++) {
    //    it->GetDataAdmissao().printData();
    // }
    // list<Salario>::iterator it2;
    // list<Salario> SalarioJorge2 = Jorge.GetSalarios();
    // for (it2 = SalarioJorge2.begin(); it2 != SalarioJorge2.end(); it2++) {
    //    cout << it2->GetValor() << endl;
    // }

    // Jorge.GetNascimento()->printData();
    // cout << Jorge.GetSalarios().GetValor() << endl;

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
    }

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
    list<Fornecedor> fornecedores;
    fornecedores.push_back(chefe);
    outraMesa.SetFornecedores(fornecedores);
    
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

    
    outraMesa.SetFornecedores(fornecedores);

    Fornecedor head;
    head.SetMateriasPrima(Mad, Valor(10, Date(2022, 11, 24)));
    head.SetMateriasPrima(Alumn, Valor(10, Date(2022, 11, 24)));
    head.SetMateriasPrima(Plastc, Valor(10, Date(2022, 11, 24)));
    head.SetMateriasPrima(Paraf, Valor(10, Date(2022, 11, 24)));

    fornecedores.push_back(head);
    outraMesa.SetFornecedores(fornecedores);

    outraMesa.SolicitarNovoLote(100, Date(2022, 11, 24));
    //outraMesa.SolicitarNovoLote(2, Date(2022, 11, 24));

    

    MateriaPrima mds;
    cout << ">> " << mds.GetLoteAtual() << endl;

    // mds.SetEstoqueMinimo("20 m2");
    // mds.SetEstoqueAtual(30);
    // mds.SetMedida("20 m");
    // mds.SetLotes(45, Date(2022, 11, 25), 0);
    // mds.SetNome("madeira");

     cout << mds.GetEstoqueAtual() << " ";
     cout << mds.GetEstoqueMinimo() << " ";
     cout << mds.GetLoteAtual() << " ";
     cout << mds.GetLotes().begin()->GetNumeroLote() << " ";
     cout << mds.GetNome() << " ";
     cout << mds.GetMedida() << " ";
     cout << "." << mds.GetUnidadeMedida() << ",\n" << endl;
*/

    // TESTE DO PROFESSOR:    

    bool gestaoDesbloqueada = false, orcamentoDesbloqueado = false, compraDesbloqueada = false;
    Empresa &Colchobel = Empresa::getInstancia();
    // Como provar q isso foi feito e deu certo?

    list<Fornecedor> fornecedores;
    Date data(2022, 11, 25);
    // Como vamos deixar isso dinâmico?

    // Instanciar informações pré prontas
        // Fornecedores
    cadastrarFornecedores(&fornecedores);
    cout << fornecedores.begin()->GetNome() << "\n\n";
        // Cargos
        // Departamentos
        // Categorias

    for(int selecao = -1; selecao != 0; cin >> selecao){

        switch (selecao){
        case -1: // INICIALIZA
            break;
        case 1: // CADASTRA PESSOA
            cadastrarPessoas(&Colchobel);
            gestaoDesbloqueada = true;
            break;
        case 2: // CADASTRA MATERIAIS E PRODUTOS
            cadastrarProdutos(&Colchobel, data, fornecedores);
            orcamentoDesbloqueado = true;
            break;
        case 3: // CADASTRA VEICULOS
            cadastrarVeiculos(&Colchobel);
            break;
        case 4: // CADASTRA ROTAS
            cadastrarRotas(&Colchobel);
            break;
        case 5: // GESTÃO DE CADASTROS (ATUALIZAR E EXCLUIR)
            if(gestaoDesbloqueada) gestaoCadastros(&Colchobel);
            else cout << "Ainda não existem pessoas cadastradas ou voce nao possui permissão para gerir os cadastros\n";
            break;
        case 6: // CRIA ORCAMENTO
            if(orcamentoDesbloqueado) {
                bool orcado;
                if(orcamento(&Colchobel, data, fornecedores)) compra(&Colchobel, data, &fornecedores);
                compraDesbloqueada = true;
            }
            else cout << "Ainda não existem produtos cadastrados.\n";
            break;
        case 7: // COMPRA
            if(compraDesbloqueada) compra(&Colchobel, data, &fornecedores); //bool comprado = orcamento(&Colchobel, data, fornecedores);
            else cout << "Ainda não existem orcamentos realizados.\n";
            break;
        default:
            cout << "Comando não encontrado. Tente novamente:\n";
            break;
        }
        cout << "\n-> Selecione: \n"
        << "'1' para Cadastro de pessoas\n"
        << "'2' para Cadastro de materiais e produtos\n"
        << "'3' para Cadastro de veiculos\n"
        << "'4' para Cadastro de rotas\n"
        << "'5' para gestao de cadastros\n"
        << "'6' para Realizar um orcamento\n"
        << "'7' para Compra\n"
        << "'0' para Sair\n";
                
    }

    cout << "Volte sempre!\n";


    return 0;

}