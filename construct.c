#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construct.h"

void print_list(struct Menu *x)
{
    while (x != NULL)
    {
        printf("%d ", x->price);
        x = x->next;
    }
    printf("\n");
}

struct Menu *insert_front(struct Menu *x, int val)
{
    struct Menu *nn = malloc(sizeof(struct Menu));
    nn->price = val;
    nn->next = x;
    return nn;
}

struct Menu *free_list(struct Menu *x)
{
    struct Menu *dummy;
    while (x != NULL)
    {
        dummy = x->next;
        free(x);
        x = NULL;
        x = dummy;
    }
    return x;
}

struct Menu *remove_node(struct Menu *front, int data)
{
    struct Menu *returnval = NULL;
    returnval = front;

    if (front->price == data)
    {
        returnval = front->next;
    }

    while (front->next != NULL)
    {
        if (front->next->price == data)
        {
            front->next = front->next->next;
            front = front->next;
        }
        front = front->next;
    }
    return returnval;
}
