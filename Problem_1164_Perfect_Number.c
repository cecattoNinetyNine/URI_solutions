#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int t, X, i = 0, c, sum;
	scanf("%d", &t);
	while (i < t)
	{
		c = 1;
		sum = 0;
		scanf("%d", &X);
		while (c < X)
		{
			if (X % c == 0)
			{
				sum = sum + c;
			}
			c++;
		}
		if (sum != X)
		{
			printf("%d nao eh perfeito\n", X);
		}
		else
		{
			printf("%d eh perfeito\n", X);
		}
		i++;
	}
	return 0;
}
