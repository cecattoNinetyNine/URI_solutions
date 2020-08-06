#include <stdio.h>

int main()
{
    register int i;
    int t, n;
    while(1)
    {
        scanf("%d", &t);
        if(t <= 0) break;
        else
        {
            for(i = 0; i < t; i++)
            {
                scanf("%d", &n);
                if(n%2 != 0) printf("%d\n", (2*n) - 1);
                else printf("%d\n", 2*n-2);
            }
        }
    }
    return 0;
}
