#include <iostream>
#include "Leito.h"
#include "Paciente.h"
#include "Hospital.h"
#include "Arquivopaciente.h"
#include "Sala.h"

using namespace std;

int main()
{
    Leito leito(false);
    leito.set_ocupacao(true);
    cout << leito.get_ocupacao() <<endl;
    leito.set_ocupacao(false);
    cout << leito.get_ocupacao() <<endl;


    Paciente pessoa("0585696586985", "Teobaldo", "ruA JFJHEWJFEF", "85483457458487", "A", 87);
    cout << pessoa.get_paciente()<<endl;

    ArquivoPacientes aqr();


    return 0;
}
