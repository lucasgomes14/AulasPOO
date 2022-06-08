#include "IngressoVIP.h"

#include <iostream>

using namespace std;

IngressoVIP::IngressoVIP(double novoValor, double novoValorAdicional) : Ingresso(novoValor)
{
	this -> valorAdicional = novoValorAdicional;
}

void IngressoVIP::setValorAdicional(double nValorAdicional)
{
	valorAdicional = nValorAdicional;
}

double IngressoVIP::getValorAdicional()
{
	return this -> valorAdicional;
}

void IngressoVIP::toString()
{
	double valor = Ingresso::getValor();
	double adicional = IngressoVIP::getValorAdicional();

	cout << "\n------------Valor com adicional------------" << endl;
	cout << "Valor do pedido:    " << valor << " R$." << endl;
	cout << "Valor do adicional: " << adicional << " R$." << endl;
	cout << "Total:              " << valor + adicional << " R$." << endl;
}