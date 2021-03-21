#include <stdio.h>

typedef struct Aluno {
    int RA;
    int idade;
} Aluno;

void leEstudantes(Aluno e[], int tam);

int main() {
    int i;
    float mediaIdade = 0;
    Aluno estudantes[3];

    leEstudantes(estudantes, 3);

    for(i=0; i<3; i++)
        mediaIdade = mediaIdade + estudantes[i].idade;
    mediaIdade = mediaIdade / 3.0;

    printf("Media = %.1f", mediaIdade);

    return 0;
}

void leEstudantes(Aluno e[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        scanf("%d", &e[i].RA);
        scanf("%d", &e[i].idade);
    }
}