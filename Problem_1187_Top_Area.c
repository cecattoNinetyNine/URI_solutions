#include <stdio.h>

int main()
{
    double M[12][12], S=0;
    int i, j, k=1, l=10;
    char O;

    scanf("%c", &O);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++) scanf("%lf", &M[i][j]);
    }
    for(i=0; i<5; i++)
    {
        for(j=k; j<=l; j++) S+= M[i][j];
        k++;
        l--;
    }
    if(O == 'S') printf("%.1lf\n", S);
    else if( O == 'M') printf("%.1lf\n", S/30.0);

    return 0;
}
