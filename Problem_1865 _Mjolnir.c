#include <stdio.h>
#include <string.h>

int main()
{
	int N, i, k;
	char ab[10];
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%s %d", ab, &k);
		if(strcmp(ab, "Thor") == 0)
		{
			printf("Y\n");
		}
		else printf("N\n");
	}
	return 0;
}
