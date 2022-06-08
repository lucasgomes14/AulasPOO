#ifndef DATA.H
#define DATA.H

#include <iostream>

class Data
{
    public:
        //atributos
        char hora;
        char minutos;

        //construtor
        Data(char hora, char minutos);

        //metodos
        void setHora(char novaHora);
        char getHora();

        void setMinutos(char novoMinutos);
        char getMinutos();
};

#endif