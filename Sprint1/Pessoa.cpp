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

    string cnpj = CPF_CNPJ.replace(/[^\d]+/g,'');

    if(cnpj == '') return false;
     
    if (cnpj.length != 14) return false;

    if (cnpj == "00000000000000" || 
        cnpj == "11111111111111" || 
        cnpj == "22222222222222" || 
        cnpj == "33333333333333" || 
        cnpj == "44444444444444" || 
        cnpj == "55555555555555" || 
        cnpj == "66666666666666" || 
        cnpj == "77777777777777" || 
        cnpj == "88888888888888" || 
        cnpj == "99999999999999") {
            return false;
    }

    int tamanho = cnpj.length - 2
    string numeros = cnpj.substring(0,tamanho);
    string digitos = cnpj.substring(tamanho);
    int soma = 0;
    int pos = tamanho - 7;

    for (i = tamanho; i >= 1; i--) {
        soma += numeros.charAt(tamanho - i) * pos--;
        if (pos < 2) 
            pos = 9;
    }

    resultado = soma % 11 < 2 ? 0 : 11 - soma % 11;
    if (resultado != digitos.charAt(0))
        return false;

    tamanho = tamanho + 1;
    numeros = cnpj.substring(0,tamanho);
    soma = 0;
    pos = tamanho - 7;
    for (i = tamanho; i >= 1; i--) {
      soma += numeros.charAt(tamanho - i) * pos--;
      if (pos < 2)
            pos = 9;
    }
    resultado = soma % 11 < 2 ? 0 : 11 - soma % 11;
    if (resultado != digitos.charAt(1))
          return false;
           
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

void Pessoa::SetNome(string Nome) {
    this->Nome = Nome;
}

void Pessoa::SetEmail(string Email) {
    this->Email = Email;
}

void Pessoa::SetCPF_CNPJ(string CPF_CNPJ, bool Tipo) {
    if(ValidarCPF_CNPJ(CPF_CNPJ, Tipo)) this->CPF_CNPJ = CPF_CNPJ;
}