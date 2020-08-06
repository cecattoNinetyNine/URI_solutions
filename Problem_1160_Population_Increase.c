#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int T, i = 0, a = 0;
	unsigned long int PA, PB;
	double G1, G2;
	scanf("%d", &T);
	while (i < T)
	{
	    a = 0;
		scanf("%lu %lu %lf %lf", &PA, &PB, &G1, &G2);
		while (PA <= PB)
		{
			PA = PA + ((PA * G1) / 100);
			PB = PB + ((PB * G2) / 100);
			a++;
			if(a > 100)
			{
			    printf("Mais de 1 seculo.\n");
			    break;
			}
		}
		if (a <= 100)
		{
			printf("%d anos.\n", a);
		}
		i++;
	}
	return 0;
}
