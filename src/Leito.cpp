#include "Leito.h"

Leito::Leito(bool ocupacao, int n_leito)
{
    ocupado = ocupacao;
    numero_leito = n_leito;
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
