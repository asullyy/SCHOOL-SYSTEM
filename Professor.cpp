#include "Professor.h"
#include "Data.h"
#include <iostream>

using std::cin;
using std::cout;

Professor::Professor()
:Pessoa("", "", 0, 0, 0), salario(0), admissao(0,0,0), formacao(""){}

Professor::Professor(string nome, string cpf, int dia, int mes, int ano, int salario, int diaAd, int mesAd, int anoAd, string formacao):Pessoa(nome, cpf, dia, mes, ano), admissao(diaAd, mesAd, anoAd){
    setNome(nome);
    setCPF(cpf);
    dia = dia;
    mes = mes;
    ano = ano;
    setSalario(salario);
    admissao.setDia(diaAd);
    admissao.setMes(mesAd);
    admissao.setAno(anoAd);
    setFormacao(formacao);
};

Professor::~Professor(){}

void Professor::setSalario(int salario){
  this->salario = salario;
}
int Professor::getSalario(){
  return this->salario;
}

void Professor::setFormacao(string formacao){
  this->formacao = formacao;
}
string Professor::getFormacao(){
  return this->formacao;
}

bool Professor::getMaxTurmas(){
  //UTILIZANDO VARIÁVEL ESTÁTICA
  static int NUMTURMAS = 0;
  if(NUMTURMAS < 2){
    NUMTURMAS++;
    return true;
  }else{
    return false;
  }
}

void Professor::mostrarProfessor(){
  cout<<"Nome: "<<getNome()<<"\n";
  cout<<"CPF: "<<getCPF()<<"\n";
  cout<<"Data de Nascimento: "<<getDataDia()<<"/"<<getDataMes()<<"/"<<getDataAno()<<"\n";
  cout<<"Salário:  R$ "<<getSalario()<<"\n";
  cout<<"Data de Admissão: "<<admissao.getDia()<<"/"<<admissao.getMes()<<"/"<<admissao.getAno()<<"\n";
  cout<<"Formação: "<<getFormacao()<<"\n";
}

