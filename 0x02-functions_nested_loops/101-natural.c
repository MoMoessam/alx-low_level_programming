#include "main.h"
/**
 * main - prints the numbers that are multiples of 3 or 5
 *
 * Description: a nested for loop that ittirates from 0 to 1024
 *
 * Return: always zero (success)
 *
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
