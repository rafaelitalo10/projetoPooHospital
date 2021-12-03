#ifndef LEITO_H
#define LEITO_H

class Leito //Cama
{
private:
    bool ocupado;
    int numero_leito; //chave para saber em qual leito o paciente está
public:
    Leito(bool ocupacao, int n_leito);
    ~Leito();
    void set_ocupacao(bool valor);  //Definir como ocupado ou desocupado
    bool get_ocupacao();
};


#endif // LEITO_H
