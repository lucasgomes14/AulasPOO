#ifndef MOTO_H_
#define MOTO_H_

#include "Automovel.h"

#include <iostream>

using namespace std;

class Moto : public Automovel{
	//ATTRIBUTES
	private:
		int cilindradas;

	//CONSTRUCTOR
	public:
		Moto(string marca, string modelo, int ano, string placa, int cilindradas);

	//METHODS
		int getCilindradas();
		void setCilindradas(int cilindradas);
};
#endif