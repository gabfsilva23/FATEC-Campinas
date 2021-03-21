/*
 * União de dois vetores
 */

#include <stdio.h>
#include <stdlib.h>

int * uniao(int v1[], int n1, int v2[], int n2) {
    int i,j,z,tam=n1;
    int *u=NULL;

    // qual o tamanho do vetor u??
    for(i=0; i<n2; i++) {
        for(j=0; j<n1; j++) {
            if(v2[i] == v1[j]) {
                break;
            }
        }
        if(j==n1) {
            // o break NAO aconteceu!
            tam++;
        }
        // se aconteceu um break no for acima, então j ainda é menor do que n1
        // se não acontece o break, o valor de j é igual a n1
        // exemplo: para v2[0] = 9 temos os seguintes passos:
        //              para i=0 e j=0 --> 9==3 (False)
        //              para i=0 e j=1 --> 9==7 (False)
        //              para i=0 e j=2 --> 9==2 (False)
        //              para i=0 e j=3 --> 9==8 (False)
        //              para i=0 e j=4 --> 9==5 (False)
        //              para i=0 e j=5 --> 9==7 (False)
    }

    u = malloc(tam * sizeof(int));

    // adiconar os elementos de v1 em u
    for(i=0; i<n1; i++)
        u[i] = v1[i];

    z = n1; // controle o indice de u

    // adicionar os elementos de v2 em u (talvez não todos...)
    for(i=0; i<n2; i++) {
        for(j=0; j<n1; j++)
            if(v2[i] == v1[j])
                break;
        if(j==n1) {
            // elemento de v2 não encontrado, pode adicionar
            u[z] = v2[i];
            z++;
        }
    }

    for(i=0; i<tam; i++)
        printf("%d \t", u[i]);

    return u;
}

int main() {
    int vetor1[] = {3, 7, 2, 8, 5};
    int vetor2[] = {9, 1, 3, 5, 7};
    int *vetor3=NULL;    // {3, 7, 2, 8, 5, 9, 1}

    vetor3 = uniao(vetor1, 5, vetor2, 5);

    // o vetor3 será usado para alguma coisa...

    return 0;
}
