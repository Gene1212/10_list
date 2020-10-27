#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construct.h"

void read(struct Menu *x)
{
    printf("Today, the price of %s is $%d\n", x->name, x->price);
}

struct Menu *new_menu()
{
    struct Menu *nm;
    nm = malloc(sizeof(struct Menu));
    return nm;
}

void modify(struct Menu *y, int val, char *food)
{
    strncpy(y->name, food, sizeof(y->name) - 1);
    y->price = val;
}