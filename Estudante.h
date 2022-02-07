#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <iostream>
#include <string>
#include "Pessoa.h"

//Herança
class Estudante:public Pessoa{
  public:
  //Sobrecarga de Construtores - Polimorfismo
  Estudante();
  Estudante(string nome, string cpf, int dia, int mes, int ano, int serie, int matricula);
  
  //destrutor
  ~Estudante();

  //getters e setters
  void setSerie(int serie);
  int getSerie();
  
  void setMatricula(int);
  int getMatricula();

  void mostrarEstudante();
  
  private:
  int serie;
  int matricula;
};
#endif