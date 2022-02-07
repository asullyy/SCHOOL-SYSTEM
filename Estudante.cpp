#include "Estudante.h"
#include <iostream>

using std::cin;
using std::cout;
Estudante::Estudante()
:Pessoa("", "", 0, 0, 0), serie(0), matricula(0){}

Estudante::Estudante(string nome, string cpf, int dia, int mes, int ano, int serie, int matricula):Pessoa(nome, cpf, dia, mes, ano){
    setNome(nome);
    setCPF(cpf);
    dia = dia;
    mes = mes;
    ano = ano;
    setSerie(serie);
    setMatricula(matricula);
};

Estudante::~Estudante(){}

void Estudante::setSerie(int serie){
  this->serie = serie;
}
int Estudante::getSerie(){
  return this->serie;
}

void Estudante::setMatricula(int mat){
  this->matricula = mat;
}
int Estudante::getMatricula(){
  return this->matricula;
}
void Estudante::mostrarEstudante(){
  cout<<"Nome: "<<getNome()<<"\n";
  cout<<"CPF: "<<getCPF()<<"\n";
  cout<<"Data de Nascimento: "<<getDataDia()<<"/"<<getDataMes()<<"/"<<getDataAno()<<"\n";
  cout<<"Série: "<<getSerie()<<"º ano"<<"\n";
  cout<<"Matrícula: "<<getMatricula()<<"\n";
}

