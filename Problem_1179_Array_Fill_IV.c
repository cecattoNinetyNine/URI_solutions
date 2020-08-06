#include <stdio.h>

int main()
{
    int i, n, par[5], impar[5], l = 0, k = 0, h;
    for(i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        if(n%2 == 0)
        {
            par[l] = n;
            l++;
            if(l == 5)
            {
                for(h = 0; h < 5; h++)
                {
                    printf("par[%d] = %d\n", h, par[h]);
                    par[h] = 0;
                }
                l = 0;
            }
        }
        else
        {
            impar[k] = n;
            k++;
            if(k == 5)
            {
                for(h = 0; h < 5; h++)
                {
                    printf("impar[%d] = %d\n", h, impar[h]);
                    impar[h] = 0;
                }
                k = 0;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        if(impar[i] == 0)break;
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(par[i] == 0)break;
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}
