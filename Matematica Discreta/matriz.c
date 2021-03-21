#include <stdio.h>

main() {

  int i1=3, j1=3, i2=3, j2=3, i, j, k, m1[3][3], m2[3][3], m3[3][3];

    printf("\nValores da Matriz 1\n=====================\n\n");
    for (i=0; i<i1; i++) {
      for(j=0; j<j1; j++) {
        printf("Digite o valor Materia Prima [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m1[i][j]);
      }
    }
    printf("\nQuantidade Produzida\n=====================\n\n");
    for (i=0; i<i2; i++) {
            if (i == 0){
            printf("\nProducao A\n");}
            if (i == 1){
            printf("\nProducao B\n");}
            if (i == 2){
            printf("\nProducao C\n");}

      for (j=0; j<j2; j++) {
          if (j == 0){
            printf("\nJaneiro\n");}
            if (j == 1){
            printf("\nFevereiro\n");}
            if (j == 2){
            printf("\nMarco\n");}
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m2[i][j]);
      }
    }
    for (i=0;i<i1; i++) {
      for (j=0; j<i1; j++) {
        for (k=0; k<j1; k++) {
          m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]);
        }
      }
    }
    printf("\nResultado\n=====================\n\n");

    for (i=0; i<i1; i++) {
      for (j=0; j<j2; j++) {
        printf("%d ", m3[i][j]);
      }
      printf("\n");
    }
    printf("\n");

  return(0);

}
