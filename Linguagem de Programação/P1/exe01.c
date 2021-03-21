
#include <stdio.h>
#include <stdlib.h>

void transforma(double matriz[100][100], double vetor[1000], int m, int n){
    int i,j,posicao=0;

        for( i=0; i<m; i++){
            for(j=0;j<n;j++){
                vetor[posicao] = matriz[i][j];
                posicao++;
              }
          }

        for (i=0;i<posicao; i++){
          printf("%d ",vetor[i]);
          }
  }

int main() {


    double matriz[100][100],vetor[1000];
    int i,j,m,n;

    printf("Digite o tamanho 'm' da matriz: ");
    scanf("%i", &m);
    printf("Digite o tamanho 'n' da matriz: ");
    scanf("%i", &n);

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("Digite elemenmto [%d,%d] de Matriz ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    transforma(matriz, vetor, m, n);

    printf("\n\n\n");

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}