#include <stdio.h>

typedef struct Coordenada {
    double x;
    double y;
} Coordenada;
//typedef struct Coordenada Coordenada;

void impCoordenada(Coordenada c);
Coordenada somaCoordenada(Coordenada p1, Coordenada p2);
Coordenada multi_escCoordenada(Coordenada c, double e);

int main() {
    Coordenada c1, c2, c_soma, multi_esc;
    double escalar=10;

    printf("Coordenda 1 \nDigite valor de X: ");
    scanf("%lf", &c1.x);
    printf("Digite valor de Y: ");
    scanf("%lf", &c1.y);

    printf("Coordenda 2 \nDigite valor de X: ");
    scanf("%lf", &c2.x);
    printf("Digite valor de Y: ");
    scanf("%lf", &c2.y);

    c_soma = somaCoordenada(c1, c2);

    printf("\nSoma das coordenadas: ");
    impCoordenada(c_soma);

    multi_esc = multi_escCoordenada(c_soma, escalar);

    printf("\nMultiplicacao pelo escalar: ");
    impCoordenada(multi_esc);

    return 0;
}

void impCoordenada(Coordenada c) {
    printf("(%.1lf, %.1lf)\n", c.x, c.y);
}

Coordenada somaCoordenada(Coordenada p1, Coordenada p2) {
    Coordenada aux;
    aux.x = p1.x + p2.x;
    aux.y = p1.y + p2.y;

    return aux;
}

Coordenada multi_escCoordenada(Coordenada c, double e) {
    Coordenada aux;
    aux.x = c.x * e;
    aux.y = c.y * e;

    return aux;
}