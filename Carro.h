#ifndef CARRO_H_
#define CARRO_H_

#include "Automovel.h"

#include <iostream>
#include <string>

class Carro : public Automovel {
	//ATTRIBUTES
	private:
		int portas;
		string tipo_de_mala;
	
	//CONSTRUCTOR
	public:
		Carro(string marca, string modelo, int ano, string placa, int portas, string tipo_de_mala);

	//METHODS
		int getPortas();
		void setPortas(int portas);

		string getTipoDeMala();
		void setTipoDeMala(string tipo_de_mala);
};
#endif