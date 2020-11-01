#ifndef CONSTRUCT_H
#define CONSTRUCT_H

struct Menu
{
    char name[100];
    int price;
    struct Menu *next;
};

void print_list(struct Menu *x);
struct Menu *insert_front(struct Menu *, int val);
struct Menu *free_list(struct Menu *x);
struct Menu *remove_node(struct Menu *front, int data);

#endif