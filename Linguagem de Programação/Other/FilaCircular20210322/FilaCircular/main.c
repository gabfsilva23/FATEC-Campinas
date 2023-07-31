#include <stdio.h>
#include <stdlib.h>

#include "FilaCircular.h"

int main()
{
    Queue *q = create_queue(4);
    enqueue(q, 5.0);
    enqueue(q, 5.5);
    enqueue(q, 10.0);
    enqueue(q, 10.5);

    print_queue(q);

    int status = enqueue(q, 11.0);
    printf("Enqueue status: %d\n", status);

    double item;
    dequeue(q, &item);
    printf("Item returned: %f\n", item);

    status = enqueue(q, 11.0);
    printf("Enqueue status: %d\n", status);

    print_queue(q);
    return 0;
}
