#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ERROR -1

int fibo(int num) {
    if (num < 0) return ERROR;
    if (num <= 1) return num;

    return fibo(num - 2) + fibo(num - 1);
}

int fibo_iterativo(int num) {
    if (num < 0) return ERROR;
    if (num <= 1) return num;

    int aux, f0=0, f1=1;
    int i;
    for (i = 2; i <= num; i++) {
        aux = f0;
        f0 = f1;
        f1 = aux + f0;
    }

    return f1;
}

int main()
{
    int num;
    long f;
    clock_t start, end;
    double rec_t = 0.0, it_t = 0.0;

    do {
        printf("Informe um valor inteiro:\n");
        scanf(" %i", &num);

        if (num <= 50) {
            start = clock();
            f = fibo(num);
            end = clock();
            rec_t = (((double)end - start)/CLOCKS_PER_SEC)*1000;
            printf("REC -> start: %li\tend: %li\ttotal: %f\n", start, end, rec_t);
            printf("Fibonacci Recursivo: %li\n\n\n", f);
        }

        start = clock();
        f = fibo_iterativo(num);
        end = clock();
        it_t = (((double)end - start)/CLOCKS_PER_SEC)*1000;

        printf("IT -> start: %li\tend: %li\ttotal: %f\n", start, end, it_t);
        printf("Fibonacci Iterativo: %li\n", f);
    } while (num >= 0);
    return 0;

}

