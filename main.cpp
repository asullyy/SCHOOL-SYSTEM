#include <iostream>
#include <stdio.h>
#include "Data.h"
#include "Pessoa.h"
#include "Estudante.h"
#include "Professor.h"
#include "Turma.h"

using std::cin;
using std::cout;

int gerarMatricula();
int gerarIdTurma();

int main(){
  int opcao;
  int contadorEstudantes = 0;
  int contadorProfessores = 0;
  int contadorTurmas = 0;

  //Lista de estudantes cadastrados - vetores
  Estudante listaEstudantes[15];
  Professor listaProfessores[10];
  Turma listaTurmas[5];
  string profDisponiveis[5];

  //INICIANDO MONTAGEM DO MENU
  cout<<"BEM VINDX A ELITE WAY SCHOOL\n------------------------------------------------------------\n";
  cout<<"1 - SAIR\n2 - CADASTRAR ALUNO\n3 - CADASTRAR PROFESSOR\n4 - CADASTRAR TURMA\n5 - CONSULTAR CADASTROS\n6 - CONSULTAR TURMAS";

  do{
    cout<<"\nEscolha uma opção: ";
    cin>>opcao;

    if (opcao == 1){
      break;
    }
    if (opcao == 2){
      string nome, cpf;
      int dia, mes, ano, serie;

      cout<<"\nNome: ";
      cin>>nome;
      cout<<"CPF: ";
      cin>>cpf;
      cout<<"Dia Nascimento: ";
      cin>>dia;
      cout<<"Mes Nascimento: ";
      cin>>mes;
      cout<<"Ano Nascimento: ";
      cin>>ano;
      cout<<"Serie: ";
      cin>>serie;

      int matricula = gerarMatricula();

      bool procuraMatricula = true;
      for(int i=0; i<contadorTurmas; i++){
        if(listaTurmas[i].getSerie() == serie){
          if(listaTurmas[i].setEstudantes(nome)==true){
            Estudante newEstudante (nome, cpf, dia, mes, ano, serie, matricula);

            newEstudante.setMatricula(matricula);

            listaEstudantes[contadorEstudantes] = Estudante (nome, cpf, dia, mes, ano, serie, matricula);

            contadorEstudantes++;
            procuraMatricula = true;

            cout<<"Aluno matrículado com sucesso! N° de matrícula: "<<matricula<<"\n";
            
            break;
          }
          procuraMatricula = false;
        }
        procuraMatricula = false;
      }
      if(procuraMatricula == false){
        cout<<"Aluno NÃO matrículado! Não há oferta de vagas disponíveis.\n";
      }
    }
    if (opcao == 3){
      string nome, cpf, formacao;
      int birthDia, birthMes, birthAno, adDia, adMes, adAno, salario;

      cout<<"\nNome: ";
      cin>>nome;
      cout<<"CPF: ";
      cin>>cpf;
      cout<<"Dia Nascimento: ";
      cin>>birthDia;
      cout<<"Mes Nascimento: ";
      cin>>birthMes;
      cout<<"Ano Nascimento: ";
      cin>>birthAno;
      cout<<"Dia de admissão: ";
      cin>>adDia;
      cout<<"Mes de admissão: ";
      cin>>adMes;
      cout<<"Ano de admissão: ";
      cin>>adAno;
      cout<<"Formação: ";
      cin>>formacao;
      cout<<"Salário: ";
      cin>>salario;

      Professor newProfe (nome, cpf, birthDia, birthMes, birthAno, salario, adDia, adMes, adAno, formacao);

      cout<<"Professor cadastrado com sucesso!\n";

      listaProfessores[contadorProfessores] = Professor(nome, cpf, birthDia, birthMes, birthAno, salario, adDia, adMes, adAno, formacao);

      profDisponiveis[contadorProfessores]= newProfe.getNome();

      contadorProfessores++;
    }
    if(opcao == 4){
      float hrInicio, hrTermino;
      int serie;

      cout<<"\nHorário de Inicio: ";
      cin>>hrInicio;
      cout<<"Horário de Término: ";
      cin>>hrTermino;
      cout<<"Série: ";
      cin>>serie;
      
      int codTurma = gerarIdTurma();

      string professor;
      for(int i=0; i<=contadorProfessores; i++){
        if (profDisponiveis[i] != "0"){
          bool aux = listaProfessores[i].getMaxTurmas();
          if (aux == true){
            professor = profDisponiveis[i];
            profDisponiveis[i] = "0";
            break; 
          }
        }
      }

      string estudantes [3] =  {"", "", ""};
      Turma newTurma (hrInicio, hrTermino, codTurma, serie, professor);  

      listaTurmas[contadorTurmas] = Turma (hrInicio, hrTermino, codTurma, serie, professor);

      cout<<"Turma cadastrada com sucesso!\n";
      contadorTurmas++;
    }
    if (opcao == 5){
      int op2;

      cout<<"Digite 1 para consultar ESTUDANTE e 2 para PROFESSOR: ";
      cin>>op2;

      if (op2 == 1){
        int buscar;
        cout<<"\nMatrícula do Estudante: ";
        cin>>buscar;

        for(int i=0; i<=contadorEstudantes; i++){
          if (listaEstudantes[i].getMatricula() == buscar){
            listaEstudantes[i].mostrarEstudante();
          }
        }
      }
      if (op2 == 2){
        string buscar;
        cout<<"\nCPF do professor: ";
        cin>>buscar;

        for(int i=0; i<=contadorProfessores; i++){
          if (listaProfessores[i].getCPF() == buscar){
            listaProfessores[i].mostrarProfessor();
          }
        }
      }
    }
    if (opcao == 6){
      int codigoTurma;
      cout<<"Digite o código da turma: ";
      cin>>codigoTurma;

      for(int i=0; i<contadorTurmas; i++){
        if(listaTurmas[i].getCodTurma()==codigoTurma){
          listaTurmas[i].mostrarTurma();
        }
      }
    }
  }while(true);
};

int gerarMatricula(){
  static int MATRICULAS = 0;
  MATRICULAS++;
  return MATRICULAS;
};

int gerarIdTurma(){
  static int idTurmas = 1000;
  idTurmas++;
  return idTurmas;
}

