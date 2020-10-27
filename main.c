#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "construct.h"

int main()
{
    srand(time(NULL));
    struct Menu *Menu1 = new_menu();
    struct Menu *Menu2 = new_menu();
    struct Menu *Menu3 = new_menu();

    modify(Menu1, rand() % 10 + 1, "Burrito");
    modify(Menu2, rand() % 10 + 1, "Fries");
    modify(Menu3, rand() % 10 + 1, "Steak");

    read(Menu1);
    read(Menu2);
    read(Menu3);

    free(Menu1);
    free(Menu2);
    free(Menu3);

    return 0;
}