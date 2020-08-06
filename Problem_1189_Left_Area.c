#include <stdio.h>

int main()
{
    float M[12][12], S=0;
    int i, j, k=0;
    char O;

    scanf("%c", &O);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++) scanf("%f", &M[i][j]);
    }
    for(i=1; i<=5; i++)
    {
        for(j=0; j<=k; j++) S+= M[i][j];
        k++;
    }
    k=4;
    for(i=6; i<=10; i++)
    {
        for(j=0; j<=k; j++) S+= M[i][j];
        k--;
    }
    if(O == 'S') printf("%.1f\n", S);
    else if( O == 'M') printf("%.1f\n", S/30.0);

    return 0;
}
