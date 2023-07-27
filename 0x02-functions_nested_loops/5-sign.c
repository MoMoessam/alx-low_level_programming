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

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_pucthar('-');
		return (-1);
	}
}
