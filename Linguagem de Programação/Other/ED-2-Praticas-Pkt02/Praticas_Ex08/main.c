#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * PRÁTICAS:
 *
 * Exercicio 8:
 *
 * Implemente um programa que:
 *  1. Crie uma função que receba “tam” como parâmetro um número inteiro entre 10 e 100. Então, deve
 *     criar um vetor de inteiros com números entre 0 e 50, cujo tamanho é definido por “tam”.
 *  2. Crie uma função que receba dois vetores de inteiros (e seus respectivos tamanhos), como
 *     parâmetro, e retorne a concatenação dos dois como um terceiro vetor.
 *  3. Crie uma função que receba como parâmetro um vetor de inteiros (e seu tamanho), e imprima
 *     seus elementos na tela.
 *  4. O programa principal deve usar a função em (a.) para criar dois vetores de inteiros de
 *     tamanhos distintos (definidos pelo usuário). Deve, então, usar a função em (b.) para
 *     concatenar os dois vetores. Finalmente, deve usar a função em (c.) para imprimir os dois
 *     vetores originais e o vetor retornado.
 *
 * Material de aula: Prof. MSc. Giulliano Paes Carnielli
 *
 */
 #define TAM_MAX 100

/* Prototipos da funcoes */
int* criaVet(int tamVet);
int* concatenaVets(int *vet1, int tamVet1, int *vet2, int tamVet2);
void imprimeVet(int *vet, int tamVet);

int main()
{
    /* Inicializa o gerador de valores pseudo-aleatorios (feito 1 vez no programa) */
    srand(time(0));

    /* Recebe tamanho dos vetores do usuario */
    int *vet1, *vet2, *vet3;
    int tamVet1, tamVet2;
    do {
        printf("Informe tamanho de Vet1 (10 e %d): ", TAM_MAX);
        scanf("%d", &tamVet1);
    } while (tamVet1 < 10 || tamVet1 >= TAM_MAX);

    do {
        printf("Informe tamanho de Vet2 (10 e %d): ", TAM_MAX);
        scanf("%d", &tamVet2);
    } while (tamVet2 < 10 || tamVet2 >= TAM_MAX);

    printf("Criando Vet1 de tamanho %d:\n", tamVet1);
    vet1 = criaVet(tamVet1);

    printf("Criando Vet2 de tamanho %d:\n", tamVet2);
    vet2 = criaVet(tamVet2);

    printf("Concatena Vet1 e Vet2 criando Vet3:\n");
    vet3 = concatenaVets(vet1, tamVet1, vet2, tamVet2);

    printf("Imprimindo Vet1:\n");
    imprimeVet(vet1, tamVet1);

    printf("Imprimindo Vet2:\n");
    imprimeVet(vet2, tamVet2);

    printf("Imprimindo Vet3:\n");
    imprimeVet(vet3, (tamVet1 + tamVet2));

    return 0;
}

/* Procedimento: criaVet
 * Descricao: instancia (aloca memoria) e retorna um vetor de inteiros de tamanho definido. Depois,
 *            inicializa o vetor com valores aleatorios entre 0 e 50.
 * Parametros:
 *    1. int tamVet: tamanho do vetor que deve ser criado
 */
int* criaVet(int tamVet) {
    int * vet;
    int i;

    /* Aloca dinamicamente memoria para o vetor */
    vet = (int *) calloc (tamVet, sizeof(int));

    /* Inicializa o vetor criado, com valores aleatorios entre 0 e 50 */
    for (i = 0; i < tamVet; i++) {
        vet[i] = rand() % 51;
    }

    return vet;
}

/* Procedimento: concatenaVets
 * Descricao: cria um novo vetor como resultado da concatenacao de dois outros
 * Parametros:
 *    1. int *vet1: vetor 1
 *    2. int tamVet1: tamanho do vetor 1
 *    3. int *vet2: vetor 2
 *    4. int tamVet2: tamanho do vetor 2
 */
int* concatenaVets(int *vet1, int tamVet1, int *vet2, int tamVet2) {
    int *vetResult;
    int i;
    vetResult = (int *)calloc(tamVet1 + tamVet2, sizeof(int));

    /* Insere vetor 1 */
    for (i = 0; i < tamVet1; i++) {
        vetResult[i] = vet1[i];
    }

    /* Insere vetor 2 */
    for (i = 0; i < tamVet2; i++) {
        vetResult[i + tamVet1] = vet2[i];
    }
    return vetResult;
}

/* Procedimento: imprimeVet
 * Descricao: imprime um vetor de tamanho definido
 * Parametros:
 *    1. int *vet: vetor para ser impresso
 *    2. int tamVet: tamanho do vetor que deve ser impresso
 */
void imprimeVet(int *vet, int tamVet) {
    int i;
    printf ("|");
    for (i = 0; i < tamVet; i++) {
        printf(" %.2d |", vet[i]);
    }
    printf ("\n");
}
