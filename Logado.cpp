#include "Logado.hpp"

void Logado::SetPermissoes(Permissao Permissoes) {
    this->Permissoes = Permissoes;
}

void Logado::SetNome(string Nome) {
    this->Nome = Nome;
}

void Logado::SetLogLeitura(Leitura Logs) {
    this->LogLeitura.push_back(Logs);
}

void Logado::SetLogEscrita(Escrita Logs) {
    this->LogEscrita.push_back(Logs);
}

void Logado::SetLogPermissaoNegada(PermissaoNegada Logs) {
    this->LogPermissaoNegada.push_back(Logs);
}

Permissao Logado::GetPermissoes() {
    return this-> Permissoes;
}

string Logado::GetNome() {
    return this-> Nome;
}

list<Leitura> Logado::GetLogLeitura() {
    return this-> LogLeitura;
}

list<Escrita> Logado::GetLogEscrita() {
    return this-> LogEscrita;
}

list<PermissaoNegada> Logado::GetLogPermissaoNegada() {
    return this-> LogPermissaoNegada;
}

int Logado::VerificarPermissaoLeitura(string Classe, string NomeMetodo) {
    string mensagemNegada = "ERRO: Permissão inválida para acessar informação";
    int counter = 0;
    list<string> Permissoes = this->Permissoes.GetNaoPermitido();
    list<string>::iterator it;
    for (it = Permissoes.begin(); it != Permissoes.end(); it++) 
    { 
      if(*it == NomeMetodo) 
      {  
        counter++;
        PermissaoNegada LogNegado = PermissaoNegada(Date::dateNow(), "Nome", Classe, NomeMetodo, mensagemNegada);
        this->SetLogPermissaoNegada(LogNegado);
      } else 
      {
        Leitura LogSucesso = Leitura(Date::dateNow(), "Nome", Classe, NomeMetodo);
        this->SetLogLeitura(LogSucesso);
      }
    }
    return counter;
}

int Logado::VerificarPermissaoEscrita(string Classe, string NomeMetodo, string InformacaoAtual, string InformacaoAnterior) {
    string mensagemNegada = "ERRO: Permissão inválida para acessar informação";
    int counter = 0;
    list<string> Permissoes = this->Permissoes.GetNaoPermitido();
    list<string>::iterator it;
    for (it = Permissoes.begin(); it != Permissoes.end(); it++) 
    { 
      if(*it == NomeMetodo) 
      {  
        counter++;
        PermissaoNegada LogNegado = PermissaoNegada(Date::dateNow(), "Nome", Classe, NomeMetodo, mensagemNegada);
        cout << mensagemNegada << endl;
        this->SetLogPermissaoNegada(LogNegado);
      } else 
      {
        Escrita LogSucesso = Escrita(Date::dateNow(), "Nome", Classe, InformacaoAtual, InformacaoAnterior);
        this->SetLogEscrita(LogSucesso);
      }
    }
    return counter;
}
