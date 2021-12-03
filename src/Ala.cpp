#include<Ala.h>

Ala::Ala(string ala)
{
    nome_da_ala = ala;
}
Ala::~Ala()
{
}

int Ala::get_numero_salas(){
    return numero_de_salas;
}

double Ala::get_percentual_ocupacao(){
   return percentual_ocupacao;
}

void Ala::calcular_percentual_ocupacao(){

}

