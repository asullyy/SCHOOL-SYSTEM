#include "Pessoa.h"

#include <iostream>

using std::cin;
using std::cout;

Pessoa::Pessoa()
:nome(""), cpf(00000000000), data(0, 0, 0){}

Pessoa::Pessoa(string nome, string cpf, int dia, int mes, int ano):data(dia, mes, ano){
  setNome(nome);
  setCPF(cpf);
  data.setDia(dia);
  data.setMes(mes);
  data.setAno(ano);
}

Pessoa::~Pessoa(){}

void Pessoa::setNome(string nome){
  this->nome = nome;
}

string Pessoa::getNome(){
  return this->nome;
}

void Pessoa::setCPF(string cpf){
  this->cpf = cpf;
}
string Pessoa::getCPF(){
  return this->cpf;
}

int Pessoa::getDataDia(){
  return data.getDia();
}
int Pessoa::getDataMes(){
  return data.getMes();
}
int Pessoa::getDataAno(){
  return data.getAno();
}
//
void Pessoa::mostrarPessoa(){
  cout<<"Nome: "<<getNome()<<"\n";
  cout<<"CPF: "<<getCPF()<<"\n";
  cout<<"Data de Nascimento: "<<data.getDia()<<"/"<<data.getMes()<<"/"<<data.getAno()<<"\n";
}