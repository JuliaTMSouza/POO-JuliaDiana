#include <iostream>

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
    Cargo novoCar = Cargo() ;
    novoCar.SetNome("Vendedor");
    novoCar.SetEscopo("Cuidar da precificação de projetos e negociação com os clientes");

    return 0;

}