#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cctype>
#include "Pessoa.hpp"

using namespace std;

bool Pessoa::ValidarCPF_CNPJ(string CPF_CNPJ, bool Tipo) {
    int tamanho = CPF_CNPJ.length();
    int verificador1 = CPF_CNPJ[tamanho - 2] - 48;
    int verificador2 = CPF_CNPJ[tamanho - 1] - 48;
    int validandoPrimeiro = 0, validandoSegundo = 0, restoPrimeiro, restoSegundo, digito1, digito2;

    for (int i = 0; i < CPF_CNPJ.length(); i++) {
        if (ispunct(CPF_CNPJ[i])) {
            cout << "Por favor, digite o CPF/CNPJ sem pontuacao" << endl;
            return false;
        }
    }

    if (Tipo) {
        
        if (CPF_CNPJ == "000000000000" ||
        CPF_CNPJ == "111111111111" ||
        CPF_CNPJ == "222222222222" || 
        CPF_CNPJ == "333333333333" || 
        CPF_CNPJ == "444444444444" || 
        CPF_CNPJ == "555555555555" || 
        CPF_CNPJ == "666666666666" || 
        CPF_CNPJ == "777777777777" || 
        CPF_CNPJ == "888888888888" || 
        CPF_CNPJ == "999999999999") {
            return false;
        }

        int validandoPrimeiro = 0, validandoSegundo = 0, restoPrimeiro, restoSegundo;
        int j = 10;
        for (int i = 0; i < tamanho - 2; i++)
        {
            validandoPrimeiro += ((int) CPF_CNPJ[i] - 48) * j;
            validandoSegundo += ((int) CPF_CNPJ[i] - 48) * (j + 1);
            j--;
        }
        validandoSegundo += verificador1 * 2;

        restoPrimeiro = (validandoPrimeiro * 10 % 11);
        if(restoPrimeiro == 10) restoPrimeiro = 0;

        restoSegundo = (validandoSegundo * 10 % 11);
        if(restoSegundo == 10) restoSegundo = 0;

        if(restoPrimeiro != verificador1 || restoSegundo != verificador2) return false;
        return true;
    }

    if (CPF_CNPJ == "00000000000000" ||
        CPF_CNPJ == "11111111111111" ||
        CPF_CNPJ == "22222222222222" || 
        CPF_CNPJ == "33333333333333" || 
        CPF_CNPJ == "44444444444444" || 
        CPF_CNPJ == "55555555555555" || 
        CPF_CNPJ == "66666666666666" || 
        CPF_CNPJ == "77777777777777" || 
        CPF_CNPJ == "88888888888888" || 
        CPF_CNPJ == "99999999999999") {
            return false;
    }

    int j = 9;
    int k = 6;

    for (int i = 0; i < tamanho - 2; i++)
    {
        if (i >= 5) {
            validandoPrimeiro += ((int) CPF_CNPJ[i] - 48) * (j - 1);
            validandoSegundo += ((int) CPF_CNPJ[i] - 48) * (j);
            j--;
        } else {
            if (i == 4) {
                validandoPrimeiro += ((int) CPF_CNPJ[i] - 48) * (9);
            } else {
                validandoPrimeiro += ((int) CPF_CNPJ[i] - 48) * (k - 1);
            }
            validandoSegundo += ((int) CPF_CNPJ[i] - 48) * k;
            k--;
        }
    }
    validandoSegundo += verificador1 * (j);
    restoPrimeiro = (validandoPrimeiro % 11);
    if(restoPrimeiro < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - restoPrimeiro;
    }
    restoSegundo = (validandoSegundo % 11);
    if(restoSegundo < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - restoSegundo;
    }

    if(digito1 != verificador1 || digito2 != verificador2) return false;
    return true;
 
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

Permissao Pessoa::GetPermissoes() {
    return this->Permissoes;
}

void Pessoa::SetNome(string Nome) {
    this->Nome = Nome;
}

void Pessoa::SetEmail(string Email) {
    this->Email = Email;
}

void Pessoa::SetCPF_CNPJ(string CPF_CNPJ, bool Tipo) {
    bool valid = ValidarCPF_CNPJ(CPF_CNPJ, Tipo);
    if(valid) this->CPF_CNPJ = CPF_CNPJ;
}

void Pessoa::SetPermissoes(Permissao Permissoes) {
    this->Permissoes = Permissoes;
}