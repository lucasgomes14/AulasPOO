#include "Moto.h"

#include <iostream>

using namespace std;

//CONSTRUCTOR
Moto::Moto(string marca, string modelo, int ano, string placa, int cilindradas) : Automovel(marca, modelo, ano, placa){
	this -> cilindradas = cilindradas;
}

//METHODS
int Moto::getCilindradas(){
	return this -> cilindradas;
}

void Moto::setCilindradas(int cilindradas){
	this -> cilindradas = cilindradas;
}