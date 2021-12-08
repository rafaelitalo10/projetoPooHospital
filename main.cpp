#include <iostream>
#include "Leito.h"
#include "Paciente.h"
#include "Hospital.h"
#include "Arquivopaciente.h"
#include "Sala.h"

using namespace std;

int main()
{
    Leito l1(true, 4);
    Leito l2(true, 2);
    Leito l3(true, 3);
    Leito l4(false, 1);
	Leito l5(false, 1);
	Leito l6(true, 3 );
	Leito l7(true, 2);
	Leito l8(false, 4);
	
	Sala s1(1, 4, l1, l2, l3, l4);
	Sala s2(3, 4, l5, l6, l7, l8);
	Sala s3(4, 4);
	Sala s4(2, 4);
	
	Ala a1("Ala 1", 4, s1, s2, s3, s4);
	Ala a2("Ala 2", 4);
	Ala a3("Ala 3", 4);
	Ala a4("Ala 4", 4);
	
	cout << "O leito 1 esta: " << l1.get_ocupacao() << endl;
	cout << "O leito 4 esta: " << l4.get_ocupacao() << endl;
	
	cout << endl << endl;

	s1.calcular_numero_leitos_ocupados();
	s1.calcular_percentual_ocupacao();
	cout << "O percentual de ocupacao da sala 1 eh: " << s1.get_percentual_ocupacao() << endl;
	
	s2.calcular_numero_leitos_ocupados();	
	s2.calcular_percentual_ocupacao();
	cout << "O percentual de ocupacao da sala 2 eh: " << s2.get_percentual_ocupacao() << endl;

	
	/* O metodo calcular_percentual_ocupacao() da classe Ala ainda nao esta pronto! */
    
	//a1.calcular_percentual_ocupacao();
	//cout << "O percentual de ocupacao da a ala 1 eh: " << a1.get_percentual_ocupacao();


}
