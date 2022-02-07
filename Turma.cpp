#include "Pessoa.h"
#include "Turma.h"
#include "Estudante.h"

#include <iostream>

using std::cin;
using std::cout;


Turma::Turma()
:hrInicio(0), hrTermino(0), codTurma(0), serie(0), professor(""){}

Turma::Turma(float hrInicio, float hrTermino, int codTurma, int serie, string professor){
  setHrInicio(hrInicio);
  setHrTermino(hrTermino);
  setCodTurma(codTurma);
  setSerie(serie);
  setProfessor(professor);
}

Turma::~Turma(){}

void Turma::setHrInicio(float hrInicio){
  this->hrInicio = hrInicio;
}
float Turma::getHrInicio(){
  return hrInicio;
}

void Turma::setHrTermino(float hrTermino){
  this->hrTermino =  hrTermino;
}
float Turma::getHrTermino(){
  return hrTermino;
}

void Turma::setCodTurma(int codTurma){
  this->codTurma =  codTurma;
}
int Turma::getCodTurma(){
  return codTurma;
}

void Turma::setSerie(int serie){
  this->serie = serie;
}
int Turma::getSerie(){
  return serie;
}

void Turma::setProfessor(string professor){
  this->professor = professor;
}
string Turma::getProfessor(){
  return professor;
}

bool Turma::setEstudantes(string nome){
 bool check = false;
 for(int i=0; i<3; i++){
    if(this->estudantes[i] == "0"){
      this->estudantes[i] = nome;
      check = true;
      break;
    }else{
      continue;
    }
 }
 return check;
}

//ponteiro
string* Turma::getEstudantes(){
  return this->estudantes;
}

void Turma::mostrarTurma(){
  cout<<"Hora de Início: "<<getHrInicio()<<"\n";
  cout<<"Hora de Término: "<<getHrTermino()<<"\n";
  cout<<"Código da turma: "<<getCodTurma()<<"\n";
  cout<<"Serie: "<<getSerie()<<"\n";
  cout<<"Professor: "<<getProfessor()<<"\n";
  cout<<"Alunos: \n";
  string *alunos = getEstudantes();
  for(int i=0; i<3; i++){
    cout<<alunos[i]<<"\n";
  }
}