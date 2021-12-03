#include "Leito.h"

Leito::Leito(bool ocupacao)
{
    ocupado = ocupacao;
}

Leito::~Leito()
{
}

void Leito::set_ocupacao(bool valor){//false = livre | true = ocupado
    ocupado = valor;
}

bool Leito::get_ocupacao(){
   return ocupado;
}
