#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <time.h>

#include "Pessoa.hpp"
#include "Funcionario.hpp"  //OK 
#include "Cliente.hpp"
#include "Cargo.hpp"           //OK
#include "Departamento.hpp"    //OK
#include "Admissao.hpp"        //OK
#include "Dissidio.hpp"
//g++ main.cpp empresa.cpp produto.cpp valor.cpp date.cpp formato.cpp vendas.cpp orcamento.cpp materiaprima.cpp categoria.cpp lote.cpp pagamentos.cpp boleto.cpp cartao.cpp pessoa.cpp fornecedor.cpp veiculo.cpp turno.cpp rota.cpp -o main

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
#include "Log.hpp"
#include "Leitura.hpp"
#include "Escrita.hpp"

using namespace std;

void ExibirLogs(list<Leitura> LogsLeitura, list<Escrita> LogsEscrita, list<PermissaoNegada> LogsPermissaoNegada) {

}
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
    string auxString, nome = "a", unEstoque = "", vlEstoque = "", estoque = "", unMedida = "", vlMedida = "", medida = "";

    float numeroSorteado, vlProduto = 0;
    string novo = "S";

    while( !(novo == "N" || novo == "n") ){
        //cout << novo << endl;
        listaFornecedores = produto->GetFornecedores();

        cout << "\n  Nome do Material: "; cin >> nome;
        novoMaterial.SetNome(nome);

        cout << "  Estoque minimo: "; cin >> vlEstoque; cin >> unEstoque;
        estoque = vlEstoque + " " + unEstoque;
        novoMaterial.SetEstoqueMinimo(estoque);
        cout << estoque << " " << novoMaterial.GetEstoqueMinimo() << endl;

        cout << "  Medida: "; cin >> vlMedida; cin >> unMedida;
        medida = vlMedida + " " + unMedida;
        novoMaterial.SetMedida(medida);
        cout << medida << " " << novoMaterial.GetMedida() << endl;

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
        produto->SetFornecedores(listaFornecedores);
        cout << "tamanho fornecedores out " << listaFornecedores.size() << endl;
        cout << "->" << produto->GetFornecedores().begin()->GetPrecoMateriais().begin()->GetValor() << endl;
        novo = "";
        cout << "Cadastrar novo material? (S/N) "; cin >> novo;
        cout << novo << endl;
        novoMaterial.SetEstoqueAtual(0);
        produto->SetMateriasPrima(novoMaterial);
        produto->SetEstoqueAtual(0);
    }
}

 void cadastrarProdutos(Empresa *empresa, Date data, list<Fornecedor> fornecedores){
     Produto novoProduto;
     string auxString;
     float auxFloat;
     int auxInt;
     bool auxBool;

     for(string novo = "S"; (novo != "N" || novo != "n"); cin >> novo){
         cout << "Nome do produto: "; cin >> auxString;
         novoProduto.SetNomeProduto(auxString);

         cout << "Categoria do produto: (como fazer?)" << endl;
         //novoProduto.SetCategoria();

        cout << "Estoque minimo: "; cin >> auxFloat;
        novoProduto.SetEstoqueMinimo(auxFloat);

        novoProduto.SetFornecedores(fornecedores);

        cout << "Cadastrar materias primas: ";
        cadastrarMaterial(&novoProduto, data);
        cout << fornecedores.size() << "\n\nfinalizou";
        
        auxInt = (int) auxFloat;
        cout << auxInt;
        novoProduto.SolicitarNovoLote(auxInt, data);
        cout << "hum";
        empresa->SetProdutos(novoProduto);
        cout << "total de mesas produzidas no final do trem: " << novoProduto.GetEstoqueAtual();
        cout << "Cadastrar novo produto? (S/N) "; cin >> novo;
        cout << "\n\nfinalizou";
    }

   //novoProduto.SetLote(auxInt, Date(2022, 11, 25), novoProduto.GetValor().GetValor());

    /*
    novoProduto.SetLoteMinimo();
     
    */
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

void orcamento(Empresa *empresa){

}

void compra(Empresa *empresa){

}



int main()
{
    //CRIANDO EMPRESA
    // //Empresa &Colchobel = Empresa::getInstancia();

    //CADASTRANDO FUNCIONARIO 1
    Funcionario JorgeLima;
    JorgeLima.SetNome("Jorge");
    JorgeLima.SetEmail("jorge@gmail.com.br");
    JorgeLima.SetMatricula("JorgeLima");
    JorgeLima.SetEndereco("Rua entre as árvores, 47");
    JorgeLima.SetCPF_CNPJ("13873357666", 1);

    //Teste exibir log

    // list<Leitura>::iterator it;
    // list<Escrita>::iterator it2;
    // // for (it = Logado::getInstancia().GetLogLeitura().begin(); it == Logado::getInstancia().GetLogLeitura().end(); it++) {
    // //    cout << &it << endl;
    // //    cout << it->GetInformacaoAcessada() << endl;
    // //    cout << "Hello" << endl;
    // // }
    // for (it2 = Logado::getInstancia().GetLogEscrita().begin(); it2 != Logado::getInstancia().GetLogEscrita().end(); it2++) {
    //    cout << "Escrita" << endl;
    //    cout << &it2 << endl;
    //    cout << it2->GetNome() << endl;
    // }

    Cargo Gerente;
    Gerente.SetNome("Gerente Scrum");
    Gerente.SetEscopo("Coordenar trabalho dos devs");

    Cargo Dev;
    Dev.SetNome("Desenvolvedor");
    Dev.SetEscopo("desenvolver projetos em JS");

    Departamento Projetos;
    Projetos.SetNome("Projetos");

    //TESTE DO PROFESSOR:    

    bool gestaoDesbloqueada = false, orcamentoDesbloqueado = false, compraDesbloqueada = false;
    Empresa &Colchobel = Empresa::getInstancia();

    //CRIANDO LOGADO
    Logado &Jorge = Logado::getInstancia();
    Permissao PermissaoJorge;
    PermissaoJorge.SetNaoPermitido("ExcluirLog");
    Jorge.SetPermissoes(PermissaoJorge);
    Jorge.SetNome("Jorge");

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
            cout << "1\n\n";
            break;
        case 2: // CADASTRA MATERIAIS E PRODUTOS
            cadastrarProdutos(&Colchobel, data, fornecedores);
            orcamentoDesbloqueado = true;
            cout << "2\n\n";
            break;
        case 3: // CADASTRA VEICULOS
            cadastrarVeiculos(&Colchobel);
            break;
        case 4: // CADASTRA ROTAS
            cadastrarRotas(&Colchobel);
            break;
        case 5: // GESTÃO DE CADASTROS (ATUALIZAR E EXCLUIR)
            if(gestaoDesbloqueada) gestaoCadastros(&Colchobel);
            else cout << "Ainda nao existem pessoas cadastradas ou voce nao possui permissao para gerir os cadastros\n";
            break;
        case 6: // CRIA ORCAMENTO
            if(orcamentoDesbloqueado) orcamento(&Colchobel);
            else cout << "Ainda nao existem produtos cadastrados.\n";
            compraDesbloqueada = true;
            break;
        case 7: // COMPRA
            if(compraDesbloqueada) compra(&Colchobel);
            else cout << "Ainda nao existem orcamentos realizados.\n";
            break;
        default:
            cout << "Comando nao encontrado. Tente novamente:\n";
            break;
        }
        cout << "Selecione: \n"
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