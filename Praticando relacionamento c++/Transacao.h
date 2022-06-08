#ifndef TRANSACAO.H
#define TRANSACAO.H 

#include "Data.h"

class Transacao
{
    private:
        //atributos
        double valor;
        char tipo;
        Data data;

    public:
        //construtor
        Transacao(double valor, char tipo);

        //metodos
        void setValor(double novoValor);
        double getValor();

        void setTipo(char novoTipo);
        char getTipo();

        void setData(Data novaData);
        char getData();
};

#endif