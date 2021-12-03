#include<Sala.h>
Sala::Sala(int n_sala, int n_leitos)
{   numero_sala = n_sala;
    numero_leitos = n_leitos;

}

Sala::~Sala()
{
}

int Sala::get_numero_sala(){
    return numero_sala;
}

int Sala::get_numero_leitos(){
   return numero_leitos;
}

int Sala::get_numero_leitos_ocupados(){
   return numero_leitos_ocupados;
}

int Sala::get_numero_leitos_desocupados(){
   return numero_leitos_desocupados;
}

double Sala::get_percentual_ocupacao(){
   return percentual_ocupacao;
}

void Sala::calcular_numero_leitos_ocupados(){
    int quantidade = 0;
    for(int i=0; i < numero_leitos; i++){
        if (leitos[i].get_ocupacao() == true){
            quantidade++;
        }
    }
    numero_leitos_ocupados = quantidade;

}

void Sala::calcular_numero_leitos_desocupados(){
    int quantidade = 0;
    for(int i=0; i < numero_leitos; i++){
        if (leitos[i].get_ocupacao() == false){
            quantidade++;
        }
    }
    numero_leitos_desocupados = quantidade;

}

void Sala::calcular_percentual_ocupacao(){
    percentual_ocupacao = numero_leitos_ocupados*100/numero_leitos;
}
