#include "Detran.h"

#include <iostream>
#include <list>

using namespace std;

//CONSTRUCTOR
Detran::Detran(Carro listaCarrosApreendidos, Moto listaMotosApreendidas, string estado_uf){
	this -> listaCarrosApreendidos.push_back(listaCarrosApreendidos);
	this -> listaMotosApreendidas.push_back(listaMotosApreendidas);
	this -> estado_uf = estado_uf;
}

//METHODS
