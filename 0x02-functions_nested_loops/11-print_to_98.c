#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	if (n < 98)
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	if (n == 98)
		printf("98");
	printf("\n");
	return (n);
}
