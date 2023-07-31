#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"

/* Arquivo de teste
 * Código-cliente: executa as operações de TAD Pilha
 */

int main()
{
    printf("\n*** STR STACK ----------------\n");

    StrStack *s1 = create_str_stack();
    push(s1, "Bla");

    printf("Tamanho da Pilha: %d\n", s1->stack_size);
    printf("Topo: [%s]\n", s1->top->str_data);
    printf("\n----------------\n");
    char *top = NULL;
    peek(s1, &top);

    printf("Tamanho da Pilha: %d\n", s1->stack_size);
    printf("Topo: %p\n", s1->top);
    printf("Topo retornado: [%s]\n", top);
    printf("\n----------------\n");

    char *top2 = NULL;
    pop(s1, &top2);

    printf("Tamanho da Pilha: %d\n", s1->stack_size);
    printf("Topo: %p\n", s1->top);
    printf("Topo retornado: [%s]\n", top);

    printf("\n*** INT STACK ----------------\n");

    IntStack *s2 = create_int_stack();
    push_int(s2, 30);

    printf("Tamanho da Pilha: %d\n", s2->stack_size);
    printf("Topo: [%d]\n", s2->top->data);
    printf("\n----------------\n");
    int e;
    peek_int(s2, &e);

    printf("Tamanho da Pilha: %d\n", s2->stack_size);
    printf("Topo: %p\n", s2->top);
    printf("Topo retornado: [%d]\n", e);
    printf("\n----------------\n");

    int e2;
    pop_int(s2, &e2);

    printf("Tamanho da Pilha: %d\n", s2->stack_size);
    printf("Topo: %p\n", s2->top);
    printf("Topo retornado: [%d]\n", e);

    return 0;
}
