#include <stdio.h>

typedef enum{false, true} bool;
int main(void)
{
    short x;
    unsigned long int ex, res;
    while(1)
    {
        scanf("%hd %lu", &x, &ex);
        if(x == 0 || ex == 0) break;
        else
        {
            res = x*ex;
            printf("%lu\n", res);
        }
    }
    return 0;
}
