#include <stdio.h>

typedef enum{false, true} bool;
int main()
{
    bool logic = false;
    register int i, j;
    int n, m, x, y;
    scanf("%d %d", &n, &m);
    int M[n][m];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(M[i][j] == 42)
            {
                if(M[i][j-1]==7 && M[i][j+1]==7 && M[i+1][j]==7 && M[i-1][j]==7 && M[i-1][j-1]==7 && M[i-1][j+1]==7 && M[i+1][j-1]==7 && M[i+1][j+1]==7)
                {
                    x = i;
                    y = j;
                    logic = true;
                    break;
                }
                if(logic == true) break;
            }
            if(logic == true) break;
        }
        if(logic == true) break;
    }
    if(logic == false) printf("0 0\n");
    else printf("%d %d\n", x+1, y+1);
    return 0;
}
