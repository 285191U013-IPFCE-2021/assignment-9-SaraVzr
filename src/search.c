#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
       /* base cases */
    if(n == 0)
     return false;

     else if(n > 0 && a[n-1]==x)
     return true;

    /* recursive steps */
    else 
     return search(a, n-1, x);
}