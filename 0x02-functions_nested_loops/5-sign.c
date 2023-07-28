#include "main.h"
/**
  * print_sign - function that  prints the sign of a number
  *
  *@n: the number entered into the functions
  *
  * Return: 1 and prints + if number is positive
  * 0 and prints 0 if number is zero
  * -1 and prints - if number is negative
  */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
