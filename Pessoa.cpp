#include <iostream>
#include "Pessoa.hpp"

using namespace std;

bool Pessoa::ValidarCPF_CNPJ(string CPF_CNPJ, bool Tipo) {
    int verificador1 = CPF_CNPJ[9] - 48;
    int verificador2 = CPF_CNPJ[10] - 48;

    if (Tipo) {
        int validandoPrimeiro = 0, validandoSegundo = 0, restoPrimeiro, restoSegundo;
        int j = 0;
        for (int i = 10; i > 1; i--)
        {
            validandoPrimeiro += ((int) CPF_CNPJ[j] - 48) * i;
            validandoSegundo += ((int) CPF_CNPJ[j] - 48) * (i + 1);
            j = j + 1;
        }
        validandoSegundo += verificador1 * 2;

        restoPrimeiro = (validandoPrimeiro * 10 % 11);
        if(restoPrimeiro == 10) restoPrimeiro = 0;

        restoSegundo = (validandoSegundo * 10 % 11);
        if(restoSegundo == 10) restoSegundo = 0;

        cout << restoPrimeiro << verificador1 << restoSegundo << verificador2 << endl;

        if(restoPrimeiro != verificador1 || restoSegundo != verificador2) return false;
        return true;
    }
    return false;
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
    bool valid = ValidarCPF_CNPJ(CPF_CNPJ, Tipo);
    cout << valid << endl;
    if(valid) this->CPF_CNPJ = CPF_CNPJ;
}