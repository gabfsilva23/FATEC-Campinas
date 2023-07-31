#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * ALOCAÇÃO DE MEMÓRIA:
 *
 * Exemplo 1: Alocacao de Matrizes
 * Duas formas de alocacao de matrizes bidimensionais:
 *   1. Sobre um vetor simples, alocado com dimensao igual a numLinhas x numColunas
 *
 *   Ex: considere matriz TAM_LIN = 5 x TAM_COl = 5
 *
 *           0  1  2  3  4  5  6  7  8  9 10 11 ...                         n
 *   mat1->|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|
 *
 *         |--- linha 0 --|--- linha 1 --| ...
 *
 *   Para acessar elemento 3 da linha 1 (1, 3) temos que "pular" os elementos da linha 0:
 *      1 *  TAM_COl + 3
 *   Genericamente temos a seguinte formula para acessar o elemento (i, j) da matriz:
 *      (i * TAM_COl) + j
 *
 *   2. Sobre um vetor de ponteiros (ponteiro para ponteiro), correspondendo as dimensoes da matriz
 *
 *   Ex: considere matriz TAM_LIN = 5 x TAM_COl = 5
 *
 *                   0  1  2  3  4
 *   mat2 ->0 |_-> |__|__|__|__|__|
 *          1 |_-> |__|__|__|__|__|
 *          2 |_-> |__|__|__|__|__|
 *          3 |_-> |__|__|__|__|__|
 *          4 |_-> |__|__|__|__|__|
 *
 *   Note que "mat2" eh um ponteiro para um vetor de ponteiros para float: float **mat;
 *   Lembrando que * eh equivalente a [], entao
 *   a. "float *x;" eh equivalente a "float x[TAM]" (com a diferenca de que a segunda forma a
 *                                                   alocacao de memoria eh estatica)
 *   b. "float **x;" equivale a "float x[TAM][TAM]"
 *
 * Material de aula: Prof. MSc. Giulliano Paes Carnielli
 *
 */

int main()
{
    int nlin = 10,ncol=10; /* numeros de linhas e colunas */
    int i, j;
    srand(time(0));

    /*** Modo 1: Vetor simples, alocado com dimensao igual a numLinhas x numColunas ***/
    float *mat1;
    /* --> Facilidade na alocacao <-- */
    mat1 = (float *)malloc(nlin * ncol * sizeof(float)); /* Aloca a matriz como 1 vetor */

    /* --> Complexidade no acesso <-- */
    /* Preenchendo a matriz com valores entre 0 - 50 divididos por valores entre 1 - 5 (float) */
    printf ("Criando Matriz 1\n\n");
    for (i = 0; i < nlin; i++) {     /* Linha */
        for (j = 0; j < ncol; j++) { /* Coluna */
            /* Usando notacao [] em um ponteiro */
            mat1[(i * ncol) + j] = (rand() % 51)/((rand() % 6) + 1.0F);
        }
    }
    printf ("Imprimindo Matriz 1:\n");
    for (i = 0; i < nlin; i++) {            /* Linha */
        for (j = 0; j < ncol; j++) {        /* Coluna */
            /* Usando notacao de aritmetica de ponteiros */
            printf("%4.1f\t", *(mat1 + ((i * ncol) + j)));
        }
        /* Proxima linha */
        printf("\n");
    }

    /*** Modo 2: Vetor de ponteiros, correspondendo as dimensoes da matriz ***/
    float **mat2; /* matriz de elementos do tipo float */

    /* --> Complexidade na alocacao <-- */
    mat2 = (float **)calloc(nlin,sizeof(float *)); /* Aloca 1a coluna da matriz */
         /* aloca vetor de ponteiros para variaveis float */
    if (mat2 != NULL){
        int i;
        for (i=0; i < nlin; i++) {
            mat2[i] = (float *)calloc(ncol,sizeof(float));
                /* aloca vetor de variaveis float */
        }
    }

    /* --> Facilidade no acesso <-- */
    /* Preenchendo a matriz com valores entre 0 - 50 divididos por valores entre 1 - 5 (float) */
    printf ("\n\nCriando Matriz 2\n\n");
    for (i = 0; i < nlin; i++) {     /* Linha */
        for (j = 0; j < ncol; j++) { /* Coluna */
            /* Usando notacao [][] em um ponteiro */
            mat2[i][j] = (rand() % 51)/((rand() % 6) + 1.0F);
        }
    }
    printf ("Imprimindo Matriz 2:\n");
    for (i = 0; i < nlin; i++) {            /* Linha */
        for (j = 0; j < ncol; j++) {        /* Coluna */
            /* Usando notacao parcial [] e  aritmetica de ponteiros */
            printf("%4.1f\t", *(mat2[i] + j));
        }
        /* Proxima linha */
        printf("\n");
    }

    return 0;
}
