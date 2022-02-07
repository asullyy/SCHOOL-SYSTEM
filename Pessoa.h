#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
#include "Data.h"
using std::string;

class Pessoa{
    public:
    //Sobrecarga de Construtores - Polimorfismo
    Pessoa();
    Pessoa(string nome, string cpf, int dia, int mes, int ano);

    //destrutor
    ~Pessoa();

    // getters e setters
    void setNome(string nome);
    string getNome();

    void setCPF(string cpf);
    string getCPF();

    void mostrarPessoa();

    //outros métodos
    int getDataDia();
    int getDataMes();
    int getDataAno();
    private:
    string nome;
    string cpf;
    
    //composição
    Data data;    
};
#endif