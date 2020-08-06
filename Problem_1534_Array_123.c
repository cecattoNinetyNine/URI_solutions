#include <stdio.h>

int main()
{
	int i, j, N;
	int v[70][70];
	while(scanf("%d", &N) != EOF)
	{
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				if(i == N - 1 - j)
				{
					v[i][j] = 2;
				}
				else if(i == j)
				{
					v[i][j] = 1;
				}
				
				else
				{
					v[i][j] = 3;
				}
				
			}
		}
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				printf("%d", v[i][j]);
				if(j == N-1)
				{
					printf("\n");
				}
			}
		}
	}
	return 0;
}
