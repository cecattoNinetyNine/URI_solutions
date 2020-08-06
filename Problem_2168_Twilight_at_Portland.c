#include <stdio.h>

typedef enum{false, true} bool;
int main(void)
{
    register int i, j;
    int n;
    scanf("%d", &n);
    int v[n+1][n+1];
    for(i = 0; i < n+1; i++)
        for(j = 0; j < n+1; j++) scanf("%d", &v[i][j]);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1] < 2)
            {
                printf("U");
            }
            else printf("S");
        }
        printf("\n");
    }
    return 0;
}
