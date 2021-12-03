#include <map>
#include<vector>
using std::vector;
#include "Sala.h"
#include<string>
using std::string;

class Ala{
private:
   vector<Sala> salas;
   string nome_da_ala; //chave
   int numero_de_salas;
   int percentual_ocupacao;

public:
   Ala(/* args */);
   ~Ala();
   void Create(); //vou utilizar um dicionário
   void Read();
   void Update();
   void Delete();
   void TaxaOcupacaoLeito(); //futuramente chama ao objeto salax para pegar get_numero_leitos_ocupados()
   int get_numero_salas();
   double get_percentual_ocupacao();
   void calcular_percentual_ocupacao();
};

