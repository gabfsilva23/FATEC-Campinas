#include <stdio.h>
#define MAX 10
#define TRUE 1
#define FALSE 0

void le_matriz(int M[MAX][MAX], int nl, int nc);
void le_vetor(int V[MAX], int nc);


int main(){

int n, i, j, soma_inicial, soma1, soma2, igual = TRUE;
int A[MAX][MAX];

 printf("Digite a ordem da matriz A:\n ");
    scanf("%d", &n);

 if (n == 0)
    return 0;

 printf("\nEntrada dos elementos da matriz A\n");
 le_matriz(A, n, n);

 soma_inicial = 0;
 soma2 = 0;

 for (j = 0; j < n; j++){
     soma_inicial += A[0][j];
        soma2 += A[j][0];
 }

 igual = soma_inicial == soma2;

 for (i = 1; igual && i < n; i++) {
    soma1 = 0;
    soma2 = 0;
    for (j = 0; j < n; j++){
        soma1 += A[i][j];
        soma2 += A[j][i];
    }

 igual = (soma1 == soma2 && soma2 == soma_inicial);
}

 if (igual){
    soma1 = 0;
    soma2 = 0;
    for (j = 0; j < n; j++){
        soma1 += A[j][j];
        soma2 += A[j][n-j-1];
    }
    igual = (soma1 == soma2 && soma2 == soma_inicial);
}

if (igual)
    printf("\n\tA eh um quadrado magico!\n");
else
    printf("\n\tA nao eh um quadrado magico!\n");

    return 0;
}


void le_vetor(int V[MAX], int nc){
    int i;

    printf("Digite %d numeros: ", nc);
    for (i = 0; i < nc; i++)
        scanf("%d", &V[i]);
}


void le_matriz(int M[MAX][MAX], int nl, int nc){
    int i;

    for(i = 0; i < nl; i++) {
        printf("\nLinha %d da matriz\n", i);
        le_vetor(M[i], nc);
    }
}
