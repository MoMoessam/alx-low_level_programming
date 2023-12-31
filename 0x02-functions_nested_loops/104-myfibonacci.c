#include "main.h"

/**
  * main - function that prints first 50 fibbonaci numbers
  *
  * Return: always 0 (success)
  *
  */

int main(void)
{
long int sum1 = 1, sum2 = 2, i, sum_1, sum_2, sum_11, sum_22;

for (i = 0; i < 50; i++)
{
	if (sum1 > 3416454622906707 || sum2 > 3416454622906707)
	{
		sum_1 = sum1 % 10000000;
		sum_11 = sum1 / 10000000;
		sum_2 = sum2 % 10000000;
		sum_22 = sum2 / 1000000;
		printf("%ld%ld, ", sum_11, sum_1);
		printf("%ld%ld", sum_22, sum_2);
		if (i != 49)
			printf(", ");
		sum_1 = sum_2 + sum_1;
		sum_2 = sum_1 + sum_2;
		sum_11 = sum_11 + sum_22;
		sum_22 = sum_22 + sum_11;
	}
	else
	{
		printf("%ld, ", sum1);
		printf("%ld", sum2);
		if (i != 49)
			printf(", ");
		sum1 = sum2 + sum1;
		sum2 = sum1 + sum2;
	}
}
printf("\n");

return (0);
}
