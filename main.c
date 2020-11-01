#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "construct.h"

int main()
{
    struct Menu *Menu1 = NULL;

    printf("Printing empty list with null: \n");
    print_list(Menu1);

    printf("Adding #s 0-9 to list.\n");
    int i;
    for (i = 0; i < 10; i++)
    {
        Menu1 = insert_front(Menu1, i);
    }

    print_list(Menu1);

    printf("Removing 9\n");
    Menu1 = remove_node(Menu1, 9);

    print_list(Menu1);

    printf("Removing 2\n");
    Menu1 = remove_node(Menu1, 2);

    print_list(Menu1);

    printf("Removing -1\n");
    Menu1 = remove_node(Menu1, -1);

    print_list(Menu1);

    printf("Freeing list\n");
    print_list(free_list(Menu1));

    
    return 0;
}