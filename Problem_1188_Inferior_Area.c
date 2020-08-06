#include <stdio.h>

int main()
{
    float M[12][12], S=0;
    int i, j, k=5, l=6;
    char O;

    scanf("%c", &O);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++) scanf("%f", &M[i][j]);
    }
    for(i=7; i<12; i++)
    {
        for(j=k; j<=l; j++) S+= M[i][j];
        k--;
        l++;
    }
    if(O == 'S') printf("%.1f\n", S);
    else if( O == 'M') printf("%.1f\n", S/30.0);

    return 0;
}
