#include "Carro.h"

#include <iostream>
#include <string>

using namespace std;

//CONSTRUCTOR
Carro::Carro(string marca, string modelo, int ano, string placa, int portas, string tipo_de_mala) : Automovel(marca, modelo, ano, placa){
	this -> portas = portas;
	this -> tipo_de_mala = tipo_de_mala;
}

//METHODS
int Carro::getPortas(){
	return this -> portas;
}

void Carro::setPortas(int portas){
	this -> portas = portas;
}

string Carro::getTipoDeMala(){
	return this -> tipo_de_mala;
}

void Carro::setTipoDeMala(string tipo_de_mala){
	this -> tipo_de_mala = tipo_de_mala;
}