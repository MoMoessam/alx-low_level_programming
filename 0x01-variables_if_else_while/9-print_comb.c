#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}

	putchar ('\n');

	return (0);
}
