#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Cargo.hpp"
#include "Departamento.hpp"
#include "Admissao.hpp"
#include "Dissidio.hpp"

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
    Jorge.SetNome("Jorge");
    Jorge.SetEmail("jorge@gmail.com.br");
    Jorge.SetMatricula("JorgeLima");
    Jorge.SetEndereco("Rua entre as árvores, 47");
    Jorge.SetCPF_CNPJ("028.080.500-46", 1);
    cout << Jorge.GetNome() << endl;
    cout << Jorge.GetEmail() << endl;
    cout << Jorge.GetMatricula() << endl;
    cout << Jorge.GetEndereco() << endl;
    cout << Jorge.GetCPF_CNPJ() << endl;

    Cargo Gerente;
    Gerente.SetEscopo("Acompanhar o trabalho dos desenvolvedores");
    Gerente.SetNome("Gerente Scrum");
    cout << Gerente.GetEscopo() << endl;
    cout << Gerente.GetNome() << endl;

    Cargo *CargoJorge = &Gerente;
    Jorge.SetCargoAtual(CargoJorge);
    cout << Jorge.GetCargoAtual() << endl;

    Departamento Projetos;
    Projetos.SetNome("Projetos");
    Projetos.SetDescricao("Gerenciar a execução dos projetos vendidos pela empresa");

    Departamento *DepartamentoJorge = &Projetos;
    Jorge.SetDepartamentoAtual(DepartamentoJorge);
    cout << Jorge.GetDepartamentoAtual() << endl;



    // Jorge.SetCargoAtual(CargoJorge);

    return 0;

}