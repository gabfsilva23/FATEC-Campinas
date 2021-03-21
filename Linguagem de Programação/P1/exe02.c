#include <stdio.h>
#include <stdlib.h>

// Gabriel Freitas da Silva - FATEC Campinas ADS - 2º Semestre (manhã)
//exercise 02 from test P1
//Failed attempt , but learn many useful things.



     void resultadosemana(){
         int
             for( i=0; i<m; i++){
               for(j=0;j<n;j++){
                     vetor[posicao] = matriz[i][j];
                     posicao++;
                 }
             }

             for(i=0; i<m; i++) {
                     for(j=0; j<n; j++) {
                         printf("Digite elemenmto [%d,%d] de Matriz ", i,j);
                         scanf("%d", &matriz[i][j]);
                    }

            for (i=0;i<posicao; i++){
            printf("%d ",vetor[i]);
                }
            }
        }





    typedef struct cor{
        char cor1[10];
        char cor2[10];
        char cor3[10];
    }; TP_COR

    typedef struct sapato{
    int codigo[19];
    int tamanho;
    }; TP_SAPATO

    struct sapato n_sapato;


int main() {

    int i=0,j,q,dias=0;
    int codigo[19]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cor.cor1="branco";
    cor.cor2="marrom";
    cor.cor3="preto";
    n_sapato[i];

        do{
            for(i=0; i<dias; i++) {
                strcpy(n_sapato[i].cor, "NULL");

                //&nome_vetor_struct[indice].nome_membro_struct;

                printf(" Codigo do sapato ");
                scanf("%d%*c", &n_sapato[i].codigo);
                printf(" Tamanho do sapato: ");
                scanf("%d%*c", &n_sapato[i].tamanho);
                printf(" escolha uma cor ");
                scanf("%d%*c", &n_sapato[i].cor);

                printf(" \n codigo %d ", n_sapato[i].codigo);
                printf(" \n tamanho %d ", n_sapato[i].tamanho);
                printf(" \n cor %s ", n_sapato[i].cor);

               dia++;
            }

          }while (dia < 6);





    //         for(i=0; i<n; i++) {
    //                 printf("%d \t", matriz[i][j]);
    //             }
    //             printf("\n");


    // //matriz
        return 0;
}}
