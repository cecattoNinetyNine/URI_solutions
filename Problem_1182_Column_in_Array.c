#include <stdio.h>

int main()
{
    float M[12][12], MEDIA, S=0;
    int C, i, j;
    char T;

    scanf("%d %c", &C, &T);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++) scanf("%f", &M[i][j]);
    }
    if(T=='S')
    {
        for(i=0; i<12; i++) S+= M[i][C];
        printf("%.1f\n", S);
    }
    else if(T=='M')
    {
        for(i=0; i<12; i++) S+= M[i][C];
        MEDIA= S/12.0;
        printf("%.1f\n", MEDIA);
    }

    return 0;
}
