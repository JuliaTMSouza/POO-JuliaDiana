#include "Pessoa.hpp"

using namespace std;

bool Pessoa::ValidarCPF_CNPJ(string CPF_CNPJ, bool Tipo) {

    if (Tipo) {
        int validandoPrimeiro = 0, validandoSegundo = 0, restoPrimeiro, restoSegundo;
        for (int i = 10, j = 0; i > 1; i--)
        {
            if((j + 1) % 4 == 0) j++;
            validandoPrimeiro += ((int) CPF_CNPJ[j] - 48) * i;
            validandoSegundo += ((int) CPF_CNPJ[j] - 48) * (i + 1);
        }
        validandoSegundo += ((int) CPF_CNPJ[12] - 48) * (2);

        restoPrimeiro = (validandoPrimeiro * 10 % 11);
        if(restoPrimeiro == 10) restoPrimeiro = 0;

        restoSegundo = (validandoPrimeiro * 10 % 11);
        if(restoSegundo == 10) restoSegundo = 0;

        if(restoPrimeiro != CPF_CNPJ[12] || restoSegundo != CPF_CNPJ[13]) return false;

        return true;
    }
}

string Pessoa::GetCPF_CNPJ() {
    return this->CPF_CNPJ;
}

string Pessoa::GetNome() {
    return this->Nome;
}

string Pessoa::GetEmail() {
    return this->Email;
}

void Pessoa::SetNome(string Nome) {
    this->Nome = Nome;
}

void Pessoa::SetEmail(string Email) {
    this->Email = Email;
}

void Pessoa::SetCPF_CNPJ(string CPF_CNPJ, bool Tipo) {
    if(ValidarCPF_CNPJ(CPF_CNPJ, Tipo)) this->CPF_CNPJ = CPF_CNPJ;
}