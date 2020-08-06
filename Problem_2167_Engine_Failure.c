#include <stdio.h>

typedef enum{false, true} bool;
int main()
{
    bool pos = false;
    register int i;
    int n, p;
    scanf("%d",&n);
    int rp[n];
    for(i = 0; i < n; i++) scanf("%d", &rp[i]);
    for(i = 1; i < n; i++)
    {
        if(rp[i] < rp[i-1])
        {
            p = i;
            pos = true;
            break;
        }
    }
    if(pos) printf("%d\n", p+1);
    else printf("0\n");
    return 0;
}
