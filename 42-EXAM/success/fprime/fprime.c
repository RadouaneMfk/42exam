#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int div = 2;
	if (n == 1)
	{
		printf("1");
	}
	while (n > 1)
	{
		while (n % div == 0)
		{
			printf("%d", div);
			n /= div;
			if (n > 1)
				printf("*");
		}
		div++;
	}
}
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int n = atoi(av[1]);
		fprime(n);
	}
	printf("\n");
}
