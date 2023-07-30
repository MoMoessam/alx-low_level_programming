#include "main.h"

/**
  * main - function that prints first 50 fibbonaci numbers
  *
  * Return: always 0 (success)
  *
  */

int main(void)
{
long int sum1 = 1, sum2 = 2, i, sum_all;

for (i = 0; i < 100; i++)
{
	if (sum1 > 4000000 || sum2 > 4000000)
		break;
	if (sum1 % 2 == 0)
		sum_all += sum1;
	if (sum2 % 2 == 0)
		sum_all += sum2;
	sum1 = sum2 + sum1;
	sum2 = sum1 + sum2;
	
	
}
printf("\n");
printf("%d", sum_all);

return (0);
}
