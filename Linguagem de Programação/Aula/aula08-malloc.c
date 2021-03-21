/*
 * Faça um programa que leia a dimensão n de um vetor,
 * em seguida aloca dinamicamente dois vetores do tipo
 * double de dimensão n, faz a leitura de cada vetor e
 * finalmente e imprime o resultado da soma dos dois vetores.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    double *v1=NULL, *v2=NULL;

    printf("Digite valor de n: ");
    scanf("%d", &n);

    // aloca o vetor
    v1 = malloc(n * sizeof(double));
    v2 = malloc(n * sizeof(double));
    if (v1 == NULL || v2 == NULL) {
        printf("Problemas com o malloc()");
        return 0;
    }

    // entra com os elementos de v1
    for(i=0; i<n; i++) {
        printf("Digite elemento %d de v1: ", i);
        scanf("%lf", &v1[i]);
    }

    // entra com os elementos de v2
    for(i=0; i<n; i++) {
        printf("Digite elemento %d de v2: ", i);
        scanf("%lf", &v2[i]);
    }

    // imprime a soma dos elementos de v1 e v2
    printf("\nSoma dos elementos: ");
    for(i=0; i<n; i++)
        printf("%.1lf \t\t", v1[i]+v2[i]);

    return 0;
}
