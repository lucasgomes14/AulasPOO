#ifndef AUTOMOVEL_H_
#define AUTOMOVEL_H_

#include <iostream>
#include <string>

using namespace std;

class Automovel{
	//ATTRIBUTES
	private:
		string marca;
		string modelo;
		int ano;
		string placa;
	
	//CONSTRUCTOR
	public:
		Automovel(string marca, string modelo, int ano, string placa);

	//METHODS
		string getMarca();
		void setMarca(string marca);

		string getModelo();
		void setModelo(string modelo);

		int getAno();
		void setAno(int ano);

		string getPlaca();
		void setPlaca(string placa);
};
#endif