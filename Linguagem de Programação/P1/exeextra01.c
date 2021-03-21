
// Gabriel Freitas da Silva - FATEC Campinas ADS - 2º Semestre (manhã)

// Failed attempt.

//  Escreva um programa que armazene o CPF, a data de nascimento e a altura de n de jogadores de
// basquete com o uso de registros. O programa deve usar um menu que execute as seguintes etapas:
// • Cadastrar um novo jogador;
// • Imprimir os jogadores com 1.9m ou menores;
// • Imprimir os jogadores com mais de 1.9m;
// • Imprimir os jogadores que nasceram em um determinado intervalo de datas;
// • Imprimir todos os jogadores com a média, o desvio padrão e a variância extraída de todas as alturas
// armazenadas;
// • Sair do programa.



#include <stdio.h>
#include <stdlib.h>
#define MAX 200


typedef struct {
    int cpf;
    int dia,mes,ano;
    float altura;
}Jogadores;

typedef struct {
    DadosJogadores todosJogadores[MAX];
}Time;//free(time)

float alturaMedia(int total,int quantidade);
float alturaVariancia(float med);
float alturaDP();

int main(){

  int alturaTotal=0;
  int n,i=0, opcao;
  float media;
  Time;
  Jogadores;

  printf ("\tBem-vindo");

  printf("\nDetermine a quantidade de jogadores a serem registrados:");
  scanf("%d", &n);

  Time* time =(Time*) malloc(sizeof(Time));

  while(opcao!=0){

  printf ("Insira uma opcao: \n1)Novo cadastro;\n2)Jogadores com 1,9m ou MENORES;\n3)Jogadores com mais de 1,9m; ");
  printf("\n4)Imprimir os jogadores que nasceram em um determinado intervalo de datas;");
  printf("\n5)Imprimir todos os jogadores com a média, o desvio padrão e a variância extraída de todas as alturas armazenadas;");
  printf("\n0)Encerrar programa;");

  scanf("%d", &opcao);

    do{
      switch ( opcao ){

        case 1 :
          for(i=0;i<n;i++){
          printf("\nInsira o CPF do jogador (Somente numeros):");
          printf("\n(Somente numeros):");
          scanf("%d", time->todosJogadores[i].cpf);

          printf("\nInsira respectivamente Dia,Mes,Ano de nascimento:");
          scanf("%d", time->todosJogadores[i].dia);
          scanf("%d", time->todosJogadores[i].mes);
          scanf("%d", time->todosJogadores[i].ano);

          printf("\nInsira altura do jogador(a):");
          scanf("%f", time->todosJogadores[i].altura);

          fflush(stdin);
          }
        break;

        case 2 :
          for(i=0;i<n;i++){
            if(time->todosJogadores[i].altura <= 1.90 ){
            printf("\n CPF %d, Altura: %.2f",todosJogadores[i].altura,time->todosJogadores[i].cpf);
            }
          }
        break;

        case 3 :
          for(i=0;i<n;i++){
            if(time->todosJogadores[i].altura > 1.90 ){
            printf("\n CPF %d, Altura: %.2f",todosJogadores[i].altura,time->todosJogadores[i].cpf);
            }
          }
        break;

        case 4 :
          printf("\nInsira respectivamente a data dsejada\nEx.:DDMMAAAA");
          scanf("");
        break;

        case 5 :
          for(i=0;i<n;i++){
              alturaTotal += time->todosJogadores[i].altura;
          }
          for(i=0;i<n;i++){
              alturaTotal += time->todosJogadores[i].altura;//DESVIO PADRÃO
          }
          n-=1;
        float alturaMedia(alturaTotal,n);
        float alturaVariancia(media);
        printf("")

        break;


        default :
        printf ("Opcao invalida!\n");
      }
    }
  }
  return 0;
}

float alturaMedia(int total,int quantidade){
  int total,quantidade;
  float media;

  media=total/quantidade;

  return media;
}

float alturaVariancia(float med){


}
