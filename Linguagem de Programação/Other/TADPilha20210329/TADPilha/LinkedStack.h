#ifndef LINKEDSTACK_H_INCLUDED
#define LINKEDSTACK_H_INCLUDED
// Bibliotecas importadas
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Códigos de Retorno
#define STATUS_OP_OK 0
#define STATUS_ERR_UNDEFINED_STACK -1
#define STATUS_ERR_UNDEFINED_STR -2
#define STATUS_ERR_EMPTY_STACK -3
#define STATUS_ERR_INVALID_PARAM -4

// **** Estrutura da Pilha de Strings

// Node
typedef struct str_stack_node {
    char *str_data; // Dado
    struct str_stack_node *nxt;
} StrStackNode;

// Header
typedef struct str_stack_header {
    int stack_size;
    StrStackNode *top;
} StrStack;

// **** Operações sobre a pilha de strings
StrStack *create_str_stack();
int push(StrStack *s, const char *str); // Empilhar (inserção)
int pop(StrStack *s, char **str);       // Desempilhar (remoção)
int peek(StrStack *s, char **str);      // Consulta topo

// Operação de teste
void print_str_stack(StrStack *s);


// **** Estrutura da Pilha de Inteiros

// Node
typedef struct int_stack_node {
    int data; // Dado
    struct int_stack_node *nxt;
} IntStackNode;

// Header
typedef struct int_stack_header {
    int stack_size;
    IntStackNode *top;
} IntStack;

// **** Operações sobre a pilha de strings
IntStack *create_int_stack();
int push_int(IntStack *s, int elem); // Empilhar (inserção)
int pop_int(IntStack *s, int *elem);       // Desempilhar (remoção)
int peek_int(IntStack *s, int *elem);      // Consulta topo

// Operação de teste
void print_int_stack(IntStack *s);


#endif // LINKEDSTACK_H_INCLUDED
