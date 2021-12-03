#ifndef ARQUIVOPACIENTE_H
#define ARQUIVOPACIENTE_H
#include "Paciente.h"
#include<time.h>

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


#endif // ARQUIVOPACIENTE_H
