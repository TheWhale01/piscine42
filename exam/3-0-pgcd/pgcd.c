#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", gcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}