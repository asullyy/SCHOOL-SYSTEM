#include "Data.h"

#include <iostream>

using std::cin;
using std::cout;

Data::Data()
:dia(00), mes(00), ano(0000){}

Data::Data(int dia, int mes, int ano){
    verificacaoData = verificaData(dia, mes);
    if (verificacaoData == true){
        setDia(dia);
        setMes(mes);
        setAno(ano);
    }
    else{
        //cout<<"Datas Inválidas. A data será setada em 0/0/0"<<"\n";
        setDia(0);
        setMes(0);
        setAno(0);
    }
}

Data::Data(const Data& other)
{
    this->dia = other.dia;
    this->mes = other.mes;
    this->ano = other.ano;
}

Data::~Data(){}

void Data::setDia(int dia){
    this->dia = dia;
}
int Data::getDia(){
    return this->dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
int Data::getMes(){
    return this->mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}
int Data::getAno(){
    return this->ano;
}

bool Data::verificaData(int dia, int mes){
  bool aux = false;

  //verificando mês
  if (mes>0 and mes<=12){
    if (mes == 4 or mes == 6 or mes == 9 or mes == 11){
      //verificando dia
      if (dia>0 and dia<=30){
        aux = true;
      }
    }else{
      if (dia>0 and dia<=31){
        aux = true;
      }
    }
  }
  return aux;
}

void Data::mostrarData() const{
    cout<<this->dia<<'/'<<this->mes<<'/'<<this->ano<<'\n';
}