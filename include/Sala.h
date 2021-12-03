#ifndef SALA_H
#define SALA_H

#include "Leito.h"
#include<vector>
#include<iostream>
using namespace std;
using std::vector;

class Sala {
private:
   vector<Leito> leitos;
   int numero_sala; //chave - Essa chave é para na classe Ala ter acesso a uma sala específica
   int numero_leitos;
   int numero_leitos_ocupados;
   int numero_leitos_desocupados;
   double percentual_ocupacao;

public:
   Sala(int n_sala, int n_leitos);
   Sala(int n_sala);
   ~Sala();
   void leitura_numero_da_sala();
   int get_numero_sala();
   int get_numero_leitos();
   int get_numero_leitos_ocupados();
   int get_numero_leitos_desocupados();
   double get_percentual_ocupacao();
   void calcular_numero_leitos_ocupados();
   void calcular_numero_leitos_desocupados();
   void calcular_percentual_ocupacao();

};
#endif
