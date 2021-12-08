#include "Ala.h"

Ala::Ala(string nome_da_ala)
{
    this->nome_da_ala = nome_da_ala;
}

Ala::Ala(string nome_da_ala, int numero_de_salas){
    this->nome_da_ala = nome_da_ala;
    this->numero_de_salas = numero_de_salas;
}

Ala::Ala(string nome_da_ala, int numero_de_salas, Sala sala1, Sala sala2, Sala sala3, Sala sala4){
    this->nome_da_ala = nome_da_ala;
    this->numero_de_salas = numero_de_salas;

    salas.push_back(sala1);
    salas.push_back(sala2);
    salas.push_back(sala3);
    salas.push_back(sala4);

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
    
    // O metodo ainda precisa ser finalizado e testado!
    /*
    double soma_ocupacao;
    int i;
    
    
    for(i = 0; i < numero_de_salas; i++){
        salas[i].calcular_percentual_ocupacao();
        soma_ocupacao += salas[i].get_percentual_ocupacao();
    }

    percentual_ocupacao = soma_ocupacao/numero_de_salas;
    */
}

