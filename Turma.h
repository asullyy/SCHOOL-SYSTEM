#ifndef TURMA_H
#define TURMA_H

#include <iostream>
#include <string>
#include "Data.h"
#include "Estudante.h"
using std::string;

class Turma{
    public:
    //Sobrecarga de Construtores - Polimorfismo
    Turma();
    Turma(float hrInicio, float hrTermino, int codTurma, int serie, string professor);

    //destrutor
    ~Turma();

    // getters e setters
    void setHrInicio(float hrInicio);
    float getHrInicio();

    void setHrTermino(float hrTermino);
    float getHrTermino();

    void setCodTurma(int codTurma);
    int getCodTurma();

    void setSerie(int serie);
    int getSerie();

    void setProfessor(string professor);
    string getProfessor();

    bool setEstudantes(string);
    string* getEstudantes();
  
    //outros métodos
    void mostrarTurma();
    
    private:
    float hrInicio;
    float hrTermino;
    int codTurma;
    int serie;
    string professor;
    //vector
    string estudantes[3] = {"0", "0", "0"}; 
};
#endif