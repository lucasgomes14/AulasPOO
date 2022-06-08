#ifndef INGRESSO_H_
#define INGRESSO_H_

using namespace std;

class Ingresso
{
	private:
		//atributos
		double valor;

	public:
		//construtor
		Ingresso(double novoValor);

		//metodos
		void setValor(double nvalor);
		double getValor();

		void toString();
};

#endif