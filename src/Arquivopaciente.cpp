#include "Arquivopaciente.h"


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
   pacientes.push_back(p); //substituir por um dicion�rio tendo como chave um cpf para n�o precisar perccorrer
}

Paciente ArquivoPacientes::Read(int i){
   return pacientes[i]; //vai ler paciente do dicion�rio com chave cpf
}

void ArquivoPacientes :: Update(Paciente p,int i){
   pacientes[i] = p; // retirar int e colocar chave o cpf do paciente {cpf: object paciente}
}

void ArquivoPacientes :: Delete(){
   pacientes.pop_back();  // retirar do dicion�rio pelo cpf do paciente
}


