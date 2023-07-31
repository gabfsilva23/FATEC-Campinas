#ifndef FILACIRCULAR_H_INCLUDED
#define FILACIRCULAR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

// Defini��es Gerais
#define TRUE 1
#define FALSE 0
#define Q_SIZE 10

// C�digos de Retorno
#define OP_OK 0
#define ERR_UNDEFINED_QUEUE -1
#define ERR_INVALID_QUEUE -2
#define ERR_OVERFLOW_QUEUE -3
#define ERR_EMPTY_QUEUE -4

// Defini��o da Estrutura da Fila
typedef struct st_queue {
    double *dados; // Vetor alocado dinamicamente (s/ redimensionamento)
    int head;
    int tail;
    int q_size;
} Queue;

// Defini��o das Opera��es sobre a Fila
Queue *create_queue(int qsize);
int enqueue(Queue *q, double item);
int dequeue(Queue *q, double *item);
int head(Queue *q, double *item);
int tail(Queue *q, double *item);
void print_queue(Queue *q);
#endif // FILACIRCULAR_H_INCLUDED
