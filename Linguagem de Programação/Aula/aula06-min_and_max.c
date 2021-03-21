#include <stdio.h>

void min_and_max(int vet[], int tam, int *menor, int *maior) {
    int i;

    *menor = vet[0];
    *maior = vet[0];
    for(i=1; i<tam; i++) {
        if(vet[i] < *menor) *menor = vet[i];
        if(vet[i] > *maior) *maior = vet[i];
    }
}

int main() {
    int v[] = {67, 3, -109, 14, 591, 23, 840, 2, 100, 22};
    int min, max;

    min_and_max(v, 10, &min, &max);

    printf("\nMaior valor de max (main): %d", max);
    printf("\nMenor valor de min (main): %d", min);

    return 0;
}

