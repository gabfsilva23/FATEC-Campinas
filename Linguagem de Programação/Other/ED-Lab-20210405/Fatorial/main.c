#include <stdio.h>
#include <stdlib.h>

long fat(int num) {
    // fat(n) = n * fat(n-1)
    // fat(0) ou fat(1) = 1
    if (num < 0) return -1; // Evitar inconsistência
    if (num <= 1) return 1L;

    return (long)(num * fat(num - 1));
}

int main()
{
    int num;
    do {
        printf("Informe um valor inteiro:\n");
        scanf(" %i", &num);

        long f = fat(num);
        printf("Fatorial(%i) = %li\n", num, f);
    } while (num >= 0);
    return 0;
}

