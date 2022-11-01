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
    //Exemplo de construtor 
    //Cargo novoCar = Cargo() ;
    //novoCar.SetNome("Vendedor");
    //novoCar.SetEscopo("Cuidar da precificação de projetos e negociação com os clientes");
    Funcionario Jorge;
    Jorge.SetNome("Jorge");
    Jorge.SetEmail("jorge@gmail.com.br");
    Jorge.SetMatricula("JorgeLima");
    Jorge.SetEndereco("Rua entre as árvores, 47");
    cout << Jorge.GetNome() << endl;
    cout << Jorge.GetEmail() << endl;
    cout << Jorge.GetMatricula() << endl;
    cout << Jorge.GetEndereco() << endl;

    return 0;

}