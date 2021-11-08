#include <stdio.h>
// #include "..\include\search.h"
// #include "..\include\sum.h"
#include "..\include\dfs.h"
#include <stdlib.h>

void main()
{
    // int a[10] = {1, 2, 3, 4, 10, 5, 6, 7, 8, 9};
    // int x;
    // printf("Sum is: %d\n", sum(a, 10));
    // scanf("Insert element you would like to search for:\n", &x);
    // printf("Search for element %d returned: %d\n", 10, search(a, 10, 10));

    node *root = make_node (4,
        make_node (7,
                make_node (28,
                make_node (77,
                        NULL,
                        NULL),
                make_node (23,
                        NULL,
                        NULL)),
                make_node (86,
                make_node (3,
                        NULL,
                        NULL),
                make_node (9,
                        NULL,
                        NULL))),
        make_node (98,
                NULL,
                NULL));

    DFT(root);

    //free_nodes(root);
}