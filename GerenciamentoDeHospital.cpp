
// Controle e gerenciamento de pacientes.
#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include "Paciente.h"
using std::vector;

using namespace std;

class Hospital
{
private:
   /* data */
public:
   Hospital(/* args */);
   ~Hospital();
   void relatorio_estatistico();
};

Hospital::Hospital(/* args */)
{
}

Hospital::~Hospital()
{
}

void Hospital::relatorio_estatistico(){

}

// Inclus�o da classe Paciente neste arquivo!

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
   Paciente(/* args */);
   ~Paciente();
   void leitura_registro();
   void set_registro( string , string , string , string , string , int  );
   void set_modificar();
   void leitura_situacao();
   void set_situacao( string );
   string get_paciente(string cpf);
   string get_situacao(string cpf);
   string get_tipo_s();
   void imprimir();
};

Paciente::Paciente(/* args */)
{
}

Paciente::~Paciente()
{
}

void Paciente::leitura_registro(){
    string temp_cpf, temp_nome, temp_endereco, temp_telefone_contato, temp_tipo_s;
    int temp_idade;

    cout << "Insira abaixo os dados do paciente" << endl;
    cout << "CPF:" << endl;
    cin >> temp_cpf;
    cout << "Nome:" << endl;
    cin >> temp_nome;
    cout << "Endereco:" << endl;
    cin >> temp_endereco;
    cout << "Idade:" << endl;
    cin >> temp_idade;
    cout << "telefone:" << endl;
    cin >> temp_telefone_contato;
    cout << "Tipo sanguíneo:" << endl;
    cin >> temp_tipo_s;

    set_registro( temp_cpf, temp_nome, temp_endereco, temp_telefone_contato, temp_tipo_s, temp_idade);
}

void Paciente::set_registro( string temp_cpf, string temp_nome, string temp_endereco, string temp_telefone_contato, string temp_tipo_s, int temp_idade ){
    cpf = temp_cpf;
    nome = temp_nome;
    endereco = temp_endereco;
    telefone_contato = temp_telefone_contato;
    tipo_s = temp_tipo_s;
    idade = temp_idade;
}

void Paciente::set_modificar(){
int op;
while(1){
           cout << "---- Alteracao de ficha ----\n\n";
           cout << "[1] Modificar nome" << endl;
           cout << "[2] Modificar endereco" << endl;
           cout << "[3] Modificar situacao" << endl;
           cout << "[4] Modificar telefone" << endl;
           cout << "[0] Sair" << endl;
           cout << "Insira a opcao desejada: ";
		   cin >> op;
            if(op == 0){
               break;
            }
           switch (op){
               case 1: cout << "Novo nome: "<< endl;
               cin >> nome; break;
               case 2: cout << "Novo endereco: " << endl;
               cin >> endereco; break;
               case 3: cout << "Nova situacao: " << endl;
               cin >> situacao; break;
               case 4: cout << "Novo telefone: " << endl;
               cin >> telefone_contato; break;
               default: cout << "Invalido" << endl;
               break;
           }
       }
}

void Paciente::leitura_situacao(){
    string temp_situacao;
     cout << "Qual a situacao do paciente?"<< endl;
      cin >> temp_situacao;
      set_situacao( temp_situacao );
}
void Paciente::set_situacao( string temp_situacao){
    situacao = temp_situacao;
}
string Paciente::get_paciente(string cpf){
	return nome;
}
string Paciente::get_situacao(string cpf){
	return situacao;
}
string Paciente::get_tipo_s(){
	return tipo_s;
}
void Paciente::imprimir(){
    cout << "---- FICHA DO PACIENTE ----\n\n";
    cout << "NOME: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "IDADE: " << idade << endl;
    cout << "ENDERECO: " << endereco << endl;
    cout << "TELEFONE: "  << telefone_contato << endl;
    cout << "TIPO SANGUINEO: " << tipo_s << endl;
    cout << "SITUACAO: "  << situacao << endl;

}

class ArquivoPacientes
{
private:
   vector<Paciente> pacientes;
   int data_in_out[11];
public:
   ArquivoPacientes(/* args */);
   ~ArquivoPacientes();
   //CRUD
   void Create(Paciente P);
   Paciente Read(int i);
   void Update(Paciente p, int i);
   void Delete();
};

ArquivoPacientes::ArquivoPacientes(/* args */)
{
  struct tm *data_tempo;
  time_t segundos;
  time(&segundos);

  data_tempo = localtime(&segundos);

	// inclusao de data e hora ao criar o arquivo
  data_in_out[0] = data_tempo->tm_mday;
  data_in_out[1] = data_tempo->tm_mon+1;
  data_in_out[2] = data_tempo->tm_year+1900;
  data_in_out[3] = data_tempo->tm_hour;
  data_in_out[4] = data_tempo->tm_min;
  data_in_out[5] = data_tempo->tm_sec;

}

ArquivoPacientes::~ArquivoPacientes()
{
}

void ArquivoPacientes::Create(Paciente p){
   pacientes.push_back(p);
}

Paciente ArquivoPacientes::Read(int i){
   return pacientes[i];
}

void ArquivoPacientes :: Update(Paciente p,int i){
   pacientes[i] = p;
}

void ArquivoPacientes :: Delete(){
   pacientes.pop_back();
}


class Leito //Cama
{
private:
   bool ocupado;
public:
   Leito(/* args */);
   ~Leito();
   void set_ocupacao(bool valor);  //Definir como ocupado ou desocupado
   bool get_ocupacao();
};

Leito::Leito(/* args */)
{
}

Leito::~Leito()
{
}

void Leito::set_ocupacao(bool valor){//false = livre | true = ocupado
    ocupado = valor;
}

bool Leito::get_ocupacao(){
   return ocupado;
}




class Sala {
private:
   vector<Leito> leitos;
   int numero_sala; //chave
   int numero_leitos;
   int numero_leitos_ocupados;
   int numero_leitos_desocupados;
   double percentual_ocupacao;

public:
   Sala(int n_sala, int n_leitos, int n_leitos_ocupados, int n_leitos_desocupados, double perc_ocupados);
   ~Sala();
   int get_numero_sala();
   int get_numero_leitos();
   int get_numero_leitos_ocupados();
   int get_numero_leitos_desocupados();
   double get_percentual_ocupacao();
   void calcular_numero_leitos_ocupados();
   void calcular_numero_leitos_desocupados();
   void calcular_percentual_ocupacao();

};

Sala::Sala(int n_sala, int n_leitos, int n_leitos_ocupados, int n_leitos_desocupados, double perc_ocupados)
{   numero_sala = n_sala;
    numero_leitos = n_leitos;
    numero_leitos_ocupados = n_leitos_ocupados;
    numero_leitos_desocupados = n_leitos_desocupados;
    percentual_ocupacao = perc_ocupados;
}

Sala::~Sala()
{
}
int Sala::get_numeto_sala(){
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


class Ala{
private:
   vector<Sala> salas;
public:
   Ala(/* args */);
   ~Ala();
   void Create();
   void Read();
   void Update();
   void Delete();
   void TaxaOcupacaoLeito(); //futuramente chama ao objeto salax para pegar get_numero_leitos_ocupados()
};

Ala::Ala(/* args */)
{
}

Ala::~Ala()
{
}


int main(int argc, char const *argv[])
{
   Paciente a;
   return 0;
}
