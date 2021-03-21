#include <stdio.h>
#include <string.h>

void str_cat(char *p_s1, char *p_s2, char *p_sres) {
    int i, tam1, tam2;

    // sres = s1 + s2
    // s1   = | f | a | t | e | c | \0 |
    // s2   = | c | a | m | p | i | n | a | s | \0 |
    // sres = | f | a | t | e | c | c | a | m | p | i | n | a | s | \0 |

    tam1 = strlen(p_s1);
    tam2 = strlen(p_s2);

    printf("\nTamanho de s1: %d", tam1);
    printf("\nTamanho de s2: %d", tam2);

    for(i=0; i<tam1; i++)
        p_sres[i] = p_s1[i];

    for(i=0; i<tam2; i++)
        p_sres[i+tam1] = p_s2[i];

    p_sres[tam1+tam2] = '\0';
}

int main() {
    char s1[10], s2[10], sres[20];

    scanf("%s", s1);
    scanf("%s", s2);

    str_cat(s1, s2, sres);

    printf("\nResultado: %s\n", sres);

    return 0;
}