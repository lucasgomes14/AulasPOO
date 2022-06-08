#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>

using namespace std;

class Endereco
{
    private:
        //atributos
        string rua;
        int numero;
        string bairro;
        string referencia;

        
    public:
        //construtor
        Endereco();

        //metodos
        void setRua(string novaRua);
        string getRua();

        void setNumero(int novoNumero);
        int getNumero();

        void setBairro(string novoBairro);
        string getBairro();

        void setReferencia(string Novareferencia);
        string getReferencia();
};

#endif