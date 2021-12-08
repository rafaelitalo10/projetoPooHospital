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
   int numero_sala; //chave - Essa chave e para na classe Ala ter acesso a uma sala espec�fica
   int numero_leitos;
   int numero_leitos_ocupados;
   int numero_leitos_desocupados;
   double percentual_ocupacao;

public:
   Sala(int numero_sala);
   Sala(int numero_sala, int numero_leitos);
   Sala(int numero_sala, int numero_leitos, Leito leito1, Leito leito2, Leito leito3, Leito leito4);
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
