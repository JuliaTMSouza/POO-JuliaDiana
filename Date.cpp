#include "Date.hpp"

using namespace std;


string Date::GetVencimento() {
    return this->Vencimento;
}

void Date::SetVencimento(string Vencimento) {
    this->Vencimento = Vencimento;
}
