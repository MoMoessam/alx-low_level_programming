#include "main.h"

/**
 * times_table - prints the n times table, starting with 0
 *
 *@n
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j >= 10)
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
			else
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
