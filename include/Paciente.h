#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include<vector>
#include<string>
#include "Ala.h"
#include "Sala.h"
#include "Leito.h"

using namespace std;

class Paciente {
private:
   string cpf; //chave
   string nome;
   string endereco;
   string telefone_contato;
   int idade;
   string tipo_s;
   string classe_triagem;
   string situacao; //internado/alta
   int numero_leito;
   int numero_sala;
   string nome_ala;
   bool ocupacao = true;
   vector<string> historico;
   Ala ala(string nome_ala);  // Aqui tem que saber em qual ala o paciente está
   Sala sala(int numero_sala);  // A sala que o paciente está.
   Leito leito(bool ocupacao, int numero_leito); //O leito que o paciente está

public:
   Paciente(string temp_cpf, string temp_nome, string temp_endereco, string temp_telefone_contato, string temp_tipo_s, int temp_idade );
   ~Paciente();
   void leitura_registro();
   void set_registro( string, string , string , string , string , int  );
   void set_modificar();
   void leitura_situacao();
   void set_situacao( string );
   string get_paciente();
   string get_situacao();
   string get_tipo_s();
   void imprimir();
};

#endif // PACIENTE_H_INCLUDED
