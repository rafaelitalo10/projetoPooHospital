#include<Ala.h>

Ala::Ala(string ala)
{
    nome_da_ala = ala;
}

Ala::Ala(string ala, int n_de_salas){
    nome_da_ala = ala;
    n_de_salas = numero_de_salas;
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
    
    double soma_ocupacao;
    int i;
    
    for(i = 0; i < numero_de_salas; i++){
        soma_ocupacao += salas[i].get_percentual_ocupacao();
    }

    percentual_ocupacao = soma_ocupacao/numero_de_salas;

}

