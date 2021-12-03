#include<time.h>
#include<iostream>
#include "Paciente.h"

Paciente::Paciente(string temp_cpf, string temp_nome, string temp_endereco, string temp_telefone_contato, string temp_tipo_s, int temp_idade)
{
    set_registro(temp_cpf, temp_nome, temp_endereco, temp_telefone_contato, temp_tipo_s, temp_idade);
}

Paciente::~Paciente()
{
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
        cout << "---- Alteração de ficha ----\n\n";
        cout << "[1] Modificar nome" << endl;
        cout << "[2] Modificar endereco" << endl;
        cout << "[3] Modificar situacao" << endl;
        cout << "[4] Modificar telefone" << endl;
        cout << "[0] Sair" << endl;
        cout << "Insira uma das opcoes acima: ";
        cin >> op;
        if(op == 0){
            break;
        }
        switch (op){
            case 1: cout << "Nome: "<< endl;
               cin >> nome; break;
            case 2: cout << "Endereco: " << endl;
                cin >> endereco; break;
            case 3: cout << "Situacao: " << endl;
               cin >> situacao; break;
            case 4: cout << "Telefone: " << endl;
               cin >> telefone_contato; break;
            default: cout << "Invalido" << endl;
               break;
        }
    }
}


void Paciente::leitura_situacao(){
    string temp_situacao;
     cout << "Digite a situação do paciente: "<< endl;
      cin >> temp_situacao;
      set_situacao( temp_situacao );
}
void Paciente::set_situacao( string temp_situacao){
    situacao = temp_situacao;
}
string Paciente::get_paciente(){
	return nome;
}
string Paciente::get_situacao(){
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

