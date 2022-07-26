#ifndef DETRAN_H_
#define DETRAN_H_

#include "Carro.h"
#include "Moto.h"

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Detran{
	//ATTRIBUTES
	private:
		list<Carro> listaCarrosApreendidos;
		list<Moto> listaMotosApreendidas;
		string estado_uf;
		int totalCarrosApreendidos = 0;
		int totalMotosApreendidas = 0;

	//CONSTRUCTOR
	public:
		Detran(Carro listaCarrosApreendidos, Moto listaMotosApreendidas, string estado_uf);

	//METHODS
		Carro getListaCarrosApreendidos();
		
		void getListaMotosApreendidas();

		string getEstadoUf();
		void setEstadoUf(string estadoUf);

		int getTotalCarrosApreendidos();
		void setAddTotalCarrosApreendidos(int totalCarrosApreendidos);

		int getTotalMotosApreendidas();
		void setAddTotalMotosApreendidas(int totalMotosApreendidas);
};
#endif