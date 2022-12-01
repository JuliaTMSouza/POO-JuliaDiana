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

list<Produto> produtosCriados;

void cadastrarPessoas(Empresa *empresa){

}

void cadastrarMaterial(Produto *produto, Date data){
    MateriaPrima novoMaterial;
    list<Fornecedor> listaFornecedores;
    string auxString = "", nome = "", unEstoque = "", vlEstoque = "", estoque = "", unMedida = "", vlMedida = "", medida = "";

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
        //empresa->SetProdutos(novoProduto);
        produtosCriados.push_back(novoProduto);
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

Rota cadastrarRotas(){
    list<Funcionario> residentes; //TROCAR PELO Q ELA CRIAR

    Rota novaRota(residentes);
    int horario;
    
    cout << "  Para qual periodo deseja cadastrar a rota?\n"
    << "  '1' para matutino\n"
    << "  '2' para vespetino\n"
    << "  '3' para noturno\n" << endl;

    cin >> horario;

    if (horario == 1) novaRota.SetTurnos(Turno(1, 8));
    if (horario == 2) novaRota.SetTurnos(Turno(2, 13));
    if (horario == 3) novaRota.SetTurnos(Turno(3, 19));

    novaRota.SetRotaRealizada();

    return novaRota;
}

void cadastrarVeiculos(Empresa *empresa){
    Veiculo novoVeiculo;
    string auxString = "";

    cout << "  Qual tipo de veiculo deseja cadastrar?\n"
    << "  '1' para onibus\n"
    << "  '2' para van\n" << endl;
    cin >> auxString;

    if(auxString == "1") novoVeiculo.SetTipo("onibus");
    if(auxString == "2") novoVeiculo.SetTipo("van");

    cout << "  Insira a placa do veiculo: ";
    cin >> auxString;

    novoVeiculo.SetPlaca(auxString);
    
    novoVeiculo.SetRotas(cadastrarRotas());

    empresa->SetVeiculos(novoVeiculo);
}


void gestaoCadastros(Empresa *empresa){

}

Orcamento testeOrcamento;

void compra(Empresa *empresa, Date data, list<Fornecedor> *fornecedores){

    //cout << "\n\n\n";
    //cout << empresa->GetProdutos().begin()->GetEstoqueAtual() << " " << testeOrcamento.GetQuantidade() << " " << empresa->GetProdutos().begin()->GetEstoqueMinimo();
    //cout << "\n\n\n";
    if((produtosCriados.begin()->GetEstoqueAtual() - testeOrcamento.GetQuantidade()) < produtosCriados.begin()->GetEstoqueMinimo()){
        cout << "Estoque insuficiente. Avisaremos quando tiver novos produtos." << endl;
        //list<Fornecedor>::iterator positFornecedores = fornecedores->begin()
        int i = 0;
        /*list<Fornecedor>::iterator positFornecedores = produtosCriados.begin()->GetFornecedores().begin();
        for(; positFornecedores != produtosCriados.begin()->GetFornecedores().end(); positFornecedores++){
            cout << i << "\n   " << positFornecedores->GetPrecoMateriais().begin()->GetValor();
            positFornecedores->AtualizaPrecoMateriais(data);
            //i ++;
            cout << " - \n" << positFornecedores->GetPrecoMateriais().begin()->GetValor();
        }*/

        list<Fornecedor>::iterator positFornecedores = produtosCriados.begin()->GetFornecedores().begin();
        for(; positFornecedores != produtosCriados.begin()->GetFornecedores().end(); positFornecedores++){
            cout << i << "\n   " << positFornecedores->GetPrecoMateriais().begin()->GetValor();
            positFornecedores->AtualizaPrecoMateriais(data);
            //i ++;
            cout << " - \n" << positFornecedores->GetPrecoMateriais().begin()->GetValor();
        }

        //produtosCriados.begin()->SetFornecedores(fornecedores);

        float novoValor = produtosCriados.begin()->GetValor().GetValor();

        produtosCriados.begin()->SetValor(Valor((novoValor * 1.05), data));

        produtosCriados.begin()->SolicitarNovoLote(testeOrcamento.GetQuantidade(), data);
        cout << "O produto que voce deseja esta disponivel em estoque, mas seu valor foi atualizado. Realize um novo orcamento." << endl;
        cout << produtosCriados.begin()->GetEstoqueAtual() << " ";
        //produtosCriados.begin()->SetEstoqueAtual(testeOrcamento.GetQuantidade());
        produtosCriados.begin()->SetEstoqueAtual(testeOrcamento.GetQuantidade());
        cout << produtosCriados.begin()->GetEstoqueAtual() << endl;

        //cout << "\n\n\n";
    }
    else{
        empresa->SetVendas(testeOrcamento);
        cout << "Pedido adquirido. Obrigado pela preferencia!" << endl;
    }

}

bool orcamento(Empresa *empresa, Date data, list<Fornecedor> fornecedores){ //trocar a entrada pela pessoa logada
    int quantidade;
    string comprar = "";

    cout << "Qual quantia de ";
    cout << produtosCriados.begin()->GetNomeProduto() << " voce deseja comprar? ";
    cin >> quantidade;

    Produto produtoAtual;
    produtoAtual.SetCategoria(produtosCriados.begin()->GetCategoria());
    Date dataLote(produtosCriados.begin()->GetLote().GetDataProducao().getAno(), produtosCriados.begin()->GetLote().GetDataProducao().getMes(), produtosCriados.begin()->GetLote().GetDataProducao().getDia());
    produtoAtual.SetLote(produtosCriados.begin()->GetLote().GetQuantidade(), dataLote, produtosCriados.begin()->GetLote().GetValorDeCompra());
    produtoAtual.SetEstoqueAtual(produtosCriados.begin()->GetEstoqueAtual());
    produtoAtual.SetValor(produtosCriados.begin()->GetValor());
    produtoAtual.SetFornecedores(&fornecedores);

    Orcamento novoOrcamento(produtoAtual, quantidade, data);

    testeOrcamento = novoOrcamento;

    cout << "O pedido de " << quantidade << " " << produtosCriados.begin()->GetNomeProduto() << "(s) ficara em R$"
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
            break;
        case 2: // CADASTRA MATERIAIS E PRODUTOS
            cadastrarProdutos(&Colchobel, data, fornecedores);
            orcamentoDesbloqueado = true;
            break;
        case 3: // CADASTRA VEICULOS
            cadastrarVeiculos(&Colchobel);
            break;
        case 4: // CADASTRA ROTAS
            cadastrarRotas();
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