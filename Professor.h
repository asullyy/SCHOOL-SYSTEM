#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Data.h"

//Herança
class Professor:public Pessoa{
  public:
  //Sobrecarga de Construtores - Polimorfismo
  Professor();
  Professor(string nome, string cpf, int dia, int mes, int ano, int salario, int diaAd, int mesAd, int anoAd, string formacao);
  
  //destrutor
  ~Professor();

  //getters e setters
  void setSalario(int serie);
  int getSalario();

  void setFormacao(string turma);
  string getFormacao();
  
  void mostrarProfessor();

  bool getMaxTurmas();
  private:
  int salario;
  Data admissao;
  string formacao;
};
#endif