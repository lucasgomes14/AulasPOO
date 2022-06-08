#include "Ingresso.h"

#include <iostream>

using namespace std;

Ingresso::Ingresso(double novoValor)
{
	this -> valor = novoValor;
}

void Ingresso::setValor(double nvalor)
{
	valor = nvalor;
}

double Ingresso::getValor()
{
	return this -> valor;
}

void Ingresso::toString()
{
	cout << "\n-----------------Ingresso------------------" << endl;
	cout << "O valor do Ingresso será: " << Ingresso::getValor() << " R$." << endl;
}