#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 *@n: skjhfa
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n > 0)
		for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j >= 10 && i * j < 100)
			{
			_putchar(((i * j) / 10) + '0');
			_putchar(((i * j) % 10) + '0');
			if (j != n)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			}
			if (i * j >= 100)
			{
				int l = i * j / 10;

				putchar((n / 100) + '0');
				putchar((l % 10) + '0');
				putchar((n % 10) + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (i * j < 10)
			{
				if (j > 0)
					_putchar(' ');
				_putchar((i * j) + '0');
				if (j != n)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
