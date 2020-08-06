#include <stdio.h>
#include <stdlib.h>

int main()
{
	float S, tax, L, T, U;
	scanf("%f", &S);
	if (0.00 < S && S <= 2000.00)
	{
		printf("Isento\n");
	}
	if (2000.00 < S && S <= 3000.00)
	{
		tax = (S - 2000.00)*(8.00 / 100.00);
		printf("R$ %.2f\n", tax);
	}
	if (3000.00 < S && S <= 4500.00)
	{
		L = S - 3000.00;
		T = (S - L) - 2000.00;
		tax = (L * (18.00 / 100.00)) + (T * (8.00 / 100.00));
		printf("R$ %.2f\n", tax);
	}
	if (4500.00 < S)
	{
		U = S - 4500.00;
		L = (S - U) - 3000.00;
		T = ((S - U) - L) - 2000.00;
		tax = (U * (28.00 / 100.00)) + (L * (18.00 / 100.00)) + (T * (8.00 / 100.00));
		printf("R$ %.2f\n", tax);
	}
	return 0;
}
