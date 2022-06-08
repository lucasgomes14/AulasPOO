#include "Data.h"
#include <iostream>

Data::Data(char hora, char minutos)
{
    this -> hora = hora;
    this -> minutos = minutos;
}

void Data::setHora(char novaHora)
{
    hora = novaHora;
}

char Data::getHora()
{
    return this -> hora;
}

void Data::setMinutos(char novoMinutos)
{
    minutos = novoMinutos;
}

char Data::getMinutos()
{
    return this -> minutos;
}