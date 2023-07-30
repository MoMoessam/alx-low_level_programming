#include "main.h"

/**
  * main - function that prints first 50 fibbonaci numbers
  *
  * Return: always 0 (success)
  *
  */

int main(void)
{
int sum1 = 1, sum2 = 2, i;

for (i = 0; i < 25; i++)
{
	printf("%d, ", sum1);
	printf("%d", sum2);
	if (i != 24)
		printf(", ");
	sum1 = sum2 + sum1;
	sum2 = sum1 + sum2;
}
printf("\n");

return (0);
}
