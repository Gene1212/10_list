#ifndef CONSTRUCT_H
#define CONSTRUCT_H

struct Menu
{
    char name[100];
    int price;
};

void read(struct Menu *x);
struct Menu *new_menu();
void modify(struct Menu *y, int val, char *food);

#endif