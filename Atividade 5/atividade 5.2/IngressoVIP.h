#ifndef INGRESSOVIP_H_
#define INGRESSOVIP_H_

#include "Ingresso.h"

using namespace std;

class IngressoVIP : public Ingresso
{
	private:
		//atributos
		double valorAdicional;

	public:
		//construtor
		IngressoVIP(double novoValor, double novoValorAdicional);

		//metodos
		void setValorAdicional(double nValorAdicional);
		double getValorAdicional();

		void toString();
};

#endif