#include "Leito.h"

Leito::Leito(bool ocupado, int numero_leito)
{
    this->ocupado = ocupado;
    this->numero_leito = numero_leito;
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
