#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

class Data{
    public:
    //Sobrecarga de Construtores - Polimorfismo
    Data();
    Data(int dia, int mes, int ano);
    Data(const Data &); //construtor de cópia

    //destrutor
    ~Data();

    // getters e setters
    void setDia(int dia);
    int getDia();

    void setMes(int mes);
    int getMes();

    void setAno(int ano);
    int getAno();

    //outros métodos
    bool verificaData(int dia, int mes);
    void mostrarData() const;

    private:
    int dia;
    int mes;
    int ano;
    bool verificacaoData;
};
#endif