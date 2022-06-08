#include "Ingresso.cpp"
#include "IngressoVIP.cpp"

#include <iostream>

using namespace std;

int main()
{
	double valor, valorAdicional;

	cout << "Por favor digite o valor do ingresso: ";
	cin >> valor;
	
	Ingresso ingresso = Ingresso(valor);
	ingresso.setValor(valor);

	cout << "\n\nPor favor digite o valor adicional do ingresso: ";
	cin >> valorAdicional;

	IngressoVIP adicional = IngressoVIP(valor, valorAdicional);
	adicional.setValorAdicional(valorAdicional);

	ingresso.toString();
	adicional.toString();

	return 0;
}