#include <stdio.h>


void somaMat(double mat1[100][100], double mat2[100][100], double matRes[100][100], int n) {
    int i,j;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            matRes[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    double mat1[100][100], mat2[100][100], matRes[100][100];
    int i,j, n;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("Digite elemenmto [%d,%d] de Mat1 ", i,j);
            scanf("%lf", &mat1[i][j]);
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("Digite elemenmto [%d,%d] de Mat2 ", i,j);
            scanf("%lf", &mat2[i][j]);
        }
    }


    somaMat(mat1, mat2, matRes, n);


    printf("\n\n\n");

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%lf \t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%lf \t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%lf \t", matRes[i][j]);
        }
        printf("\n");
    }


    return 0;
}
