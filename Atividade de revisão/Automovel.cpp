#include "Automovel.h"

#include <iostream>
#include <string>

using namespace std;

//CONSTRUCTOR
Automovel::Automovel(string marca, string modelo, int ano, string placa){
	this -> marca = marca;
	this -> modelo = modelo;
	this -> ano = ano;
	this -> placa = placa;
}

//METHODS
string Automovel::getMarca(){
	return this -> marca;
}

void Automovel::setMarca(string marca){
	this -> marca = marca;
}

string Automovel::getModelo(){
	return this -> modelo;
}

void Automovel::setModelo(string modelo){
	this -> modelo = modelo;
}

int Automovel::getAno(){
	return this -> ano;
}

void Automovel::setAno(int ano){
	this -> ano = ano;
}

string Automovel::getPlaca(){
	return this -> placa;
}

void Automovel::setPlaca(string placa){
	this -> placa = placa;
}
