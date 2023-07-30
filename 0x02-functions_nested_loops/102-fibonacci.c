#include "main.h"

/**
  * main - function that prints first 50 fibbonaci numbers
  *
  * Return: always 0 (success)
  *
  */

int main(void)
{
long int sum1 = 1, sum2 = 2, i;

for (i = 0; i < 25; i++)
{
	printf("%ld, ", sum1);
	printf("%ld", sum2);
	if (i != 24)
		printf(", ");
	sum1 = sum2 + sum1;
	sum2 = sum1 + sum2;
}
printf("\n");

return (0);
}
