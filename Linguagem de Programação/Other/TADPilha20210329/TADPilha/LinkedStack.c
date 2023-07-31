#include "LinkedStack.h"

// ***** Operações Internas *****
int str_len(const char *s)
{
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return (len);
}

// ***** Operações Públicas (PILHA DE STRINGS) *****
/**
 * Cria a estrutura header para uma pilha de strings vazia
 * @return referência para o header da pilha criada
 */
StrStack *create_str_stack()
{
    StrStack *s = (StrStack *)malloc(sizeof(StrStack));
    s->stack_size = 0;
    s->top = NULL;
    return s;
}

/**
 * Empilha uma string na pilha fornecida
 * @param StrStack *s: referência para a pilha que deve ser alterada
 * @param const char *str: referência constante para string a ser empilhada
 * @return status da operação. Sucesso retorna 0, senão, código de erro
 */
int push(StrStack *s, const char *str)
{
    if (s == NULL) return STATUS_ERR_UNDEFINED_STACK;
    if (str == NULL) return STATUS_ERR_UNDEFINED_STR;

    // Determinar o tamanho da string
    int size = str_len(str) + 1;

    // Cria node da pilha
    StrStackNode *n = (StrStackNode*)malloc(sizeof(StrStackNode));
    n->nxt = NULL;
    // Aloca memória para a string
    n->str_data = (char *)calloc(size, sizeof(char));
    // Copia dados de entrada
    strncpy(n->str_data, str, size);

    // Colocar novo node na pilha
    if (s->top != NULL) {
        n->nxt = s->top;
    }
    s->top = n;
    s->stack_size++;
    return STATUS_OP_OK;
}

int pop(StrStack *s, char **str)
{
    if (s == NULL) return STATUS_ERR_UNDEFINED_STACK;
    if (s->top == NULL) {
        if (str != NULL) *str = NULL;
        return STATUS_ERR_EMPTY_STACK;
    }

    // Desempilhar
    StrStackNode *n = s->top;
    s->top = n->nxt;

    // Tratar o retorno
    if (str != NULL) {
        *str = n->str_data;
    } else {
        free(n->str_data);
    }

    // Liberar memória
    free(n);
    s->stack_size--;

    return STATUS_OP_OK;
}

int peek(StrStack *s, char **str)
{
    if (s == NULL) return STATUS_ERR_UNDEFINED_STACK;
    if (str == NULL) return STATUS_ERR_INVALID_PARAM;
    if (s->top == NULL) {
        *str = NULL;
        return STATUS_ERR_EMPTY_STACK;
    }
    *str = s->top->str_data;
    return STATUS_OP_OK;
}

// Operação de teste
void print_str_stack(StrStack *s)
{
    /*** EXERCÍCIO ***/
}

// ***** Operações Públicas (PILHA DE INTEIROS) *****
IntStack *create_int_stack()
{
    IntStack *s = (IntStack *)malloc(sizeof(IntStack));
    s->stack_size = 0;
    s->top = NULL;
    return s;
}

int push_int(IntStack *s, int elem)
{
    if (s == NULL) return STATUS_ERR_UNDEFINED_STACK;

    // Cria node da pilha
    IntStackNode *n = (IntStackNode*)malloc(sizeof(IntStackNode));
    n->nxt = NULL;
    n->data = elem;

    // Colocar novo node na pilha
    if (s->top != NULL) {
        n->nxt = s->top;
    }
    s->top = n;
    s->stack_size++;
    return STATUS_OP_OK;
}

int pop_int(IntStack *s, int *elem)
{
    if (s == NULL) return STATUS_ERR_UNDEFINED_STACK;
    if (s->top == NULL) {
        return STATUS_ERR_EMPTY_STACK;
    }

    // Desempilhar
    IntStackNode *n = s->top;
    s->top = n->nxt;

    // Tratar o retorno
    if (elem != NULL) {
        *elem = n->data;
    }

    // Liberar memória
    free(n);
    s->stack_size--;

    return STATUS_OP_OK;
}

int peek_int(IntStack *s, int *elem)
{
    if (s == NULL) return STATUS_ERR_UNDEFINED_STACK;
    if (elem == NULL) return STATUS_ERR_INVALID_PARAM;
    if (s->top == NULL) {
        return STATUS_ERR_EMPTY_STACK;
    }
    *elem = s->top->data;
    return STATUS_OP_OK;
}


// Operação de teste
void print_int_stack(IntStack *s)
{
    /*** EXERCÍCIO ***/
}

