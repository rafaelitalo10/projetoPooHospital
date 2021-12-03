#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include<vector>
#include<string>


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
   vector<string> historico;

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
