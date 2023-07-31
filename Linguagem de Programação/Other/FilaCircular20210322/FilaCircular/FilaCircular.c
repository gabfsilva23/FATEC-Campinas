#include "FilaCircular.h"
// ************* Operações Privadas *************
int is_full(Queue *q)
{
    return (q->tail + 1)%q->q_size == q->head;
}

int is_empty(Queue *q)
{
    return q->head == q->tail;
}

// ************* Operações Públicas *************
Queue *create_queue(int qsize)
{
    qsize++; // Devido ao espaço desperdiçado no vetor
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->dados = (double *)calloc(qsize, sizeof(double));
    q->head = 0;
    q->tail = 0;
    q->q_size = qsize;

    return q;
}

int enqueue(Queue *q, double item)
{
    if (q == NULL) return ERR_UNDEFINED_QUEUE;
    if (q->dados == NULL) return ERR_INVALID_QUEUE;

    if (is_full(q)) return ERR_OVERFLOW_QUEUE;
    q->dados[q->tail] = item;
    q->tail = (q->tail + 1) % q->q_size;

    return OP_OK;
}

int dequeue(Queue *q, double *item)
{
    if (q == NULL) return ERR_UNDEFINED_QUEUE;
    if (q->dados == NULL) return ERR_INVALID_QUEUE;

    if (is_empty(q)) return ERR_EMPTY_QUEUE;
    *item = q->dados[q->head];
    q->head = (q->head + 1) % q->q_size;

    return OP_OK;
}

int head(Queue *q, double *item)
{
    if (q == NULL) return ERR_UNDEFINED_QUEUE;
    if (q->dados == NULL) return ERR_INVALID_QUEUE;

    if (is_empty(q)) return ERR_EMPTY_QUEUE;
    *item = q->dados[q->head];

    return OP_OK;
}

int tail(Queue *q, double *item)
{
    if (q == NULL) return ERR_UNDEFINED_QUEUE;
    if (q->dados == NULL) return ERR_INVALID_QUEUE;

    if (is_empty(q)) return ERR_EMPTY_QUEUE;

    int last_item = (q->tail > 0)? q->tail - 1 : q->q_size - 1;
                  //   TESTES    ?  TRUE       :     FALSE

    *item = q->dados[last_item];
    return OP_OK;
}

void print_queue(Queue *q)
{
    if (q != NULL && q->dados != NULL) {
        printf("Queue: ");
        int i = q->head;
        while ( i != q->tail ) {
            printf("%f ", q->dados[i]);
            i = (i+1)%q->q_size;
        }
        printf("\n");
    } else {
        printf("Fila invalida ou indefinida ...");
    }
}
