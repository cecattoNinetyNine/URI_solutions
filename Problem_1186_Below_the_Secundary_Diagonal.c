#include <stdio.h>
#include <string.h>

int main()
{
    float M[12][12], sum = 0.0, media;
    int i, j, k = 1;
    char op;
    scanf("%c", &op);
    getchar();
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }
    if(op == 'S')
    {
        for(i = 11; i >= 0; i--)
        {
            for(j = k; j < 12; j++)
            {
                sum = sum + M[i][j];
            }
            k = k + 1;
        }
        printf("%.1f\n", sum);
    }
    if(op == 'M')
    {
        for(i = 11; i >= 0; i--)
        {
            for(j = k; j < 12; j++)
            {
                sum = sum + M[i][j];
            }
            k = k + 1;
        }
        media = sum/66;
        printf("%.1f\n", media);
    }
    return 0;
}
