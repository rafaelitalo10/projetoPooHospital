#ifndef ALA_H
#define ALA_H

#include "Sala.h"
#include <map>
#include<vector>
#include<string>

using std::vector;
using std::string;

class Ala{
private:
   vector<Sala> salas;
   string nome_da_ala; //chave
   int numero_de_salas;
   double percentual_ocupacao;

public:
   Ala(string nome_da_ala);
   Ala(string nome_da_ala, int numero_de_salas);
   Ala(string nome_da_ala, int numero_de_salas, Sala sala1, Sala sala2, Sala sala3, Sala sala4);
   ~Ala();
   void Create(); //vou utilizar um dicionario
   void Read();
   void Update();
   void Delete();
   void TaxaOcupacaoLeito(); //futuramente chama ao objeto salax para pegar get_numero_leitos_ocupados()
   int get_numero_salas();
   double get_percentual_ocupacao();
   void calcular_percentual_ocupacao();
};


#endif // ALA_H
