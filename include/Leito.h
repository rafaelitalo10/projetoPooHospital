#ifndef LEITO_H
#define LEITO_H

class Leito //Cama
{
private:
    bool ocupado;
public:
    Leito(bool ocupacao);
    ~Leito();
    void set_ocupacao(bool valor);  //Definir como ocupado ou desocupado
    bool get_ocupacao();
};


#endif // LEITO_H
