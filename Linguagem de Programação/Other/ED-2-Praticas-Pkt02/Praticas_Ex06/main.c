#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * PRÁTICAS:
 *
 * Exercicio 6
 * Crie um programa que declare um vetor de inteiros de 20 posicoes. Sem utilizar indices, faca o
 * seguinte:
 *   1. Preenche-lo com valores aleatorios de 1 – 100
 *   2. Ler um inteiro “aux” (entre 0-19)
 *   3. Imprimir o valor contido na posicao “aux” do vetor
 *   4. Imprimir o vetor inteiro, na ordem inversa.
 *
 * Material de aula: Prof. MSc. Giulliano Paes Carnielli
 *
 */
#define DIMENSAO 20


int main()
{
    /* Declara vetor de DIMENSAO posicoes */
    int vetNum[DIMENSAO];

    /* Declara ponteiro auxiliar para percorrer o vetor
     * OBS: ao declarar um ponteiro SEMPRE inicializa-lo com NULL
     */
    int *ptrVet = NULL;

    /* Inicializa o vetor aleatoriamente */
    srand(time(0));
    int i;
    ptrVet = vetNum; /* Aponta ptrVet para a 1a posicao do vetor */
    for (i = 0; i < DIMENSAO;i++) {
        /* Aritmetica de ponteiros para percorrer o vetor (sem indices) */
        *(ptrVet + i) = rand() % 101;
    }

    /* Recebe valor do usuario */
    int userVal;
    do {
        printf("Informe um valor entre 0 e %d: ", DIMENSAO);
        scanf("%d", &userVal);
    } while (userVal < 0 || userVal >= DIMENSAO);

    /* Imprime valor da posicao userVal */
    ptrVet = vetNum;
    printf("Valor contido no indice %d eh %d\n\n", userVal, *(ptrVet + userVal));

    /* Percorre o vetor de na ordem inversa
     * OBS: como ilustracao, vamos usar outra abordagem (posicionar o ponteiro no final do vetor)
     */
    printf("Imprimindo vetor na ordem inversa:\n");
    ptrVet = &vetNum[DIMENSAO - 1];
    for (i = 0; i < DIMENSAO; i++) {
        printf("%d ", *(ptrVet--));
    }

    return 0;
}
