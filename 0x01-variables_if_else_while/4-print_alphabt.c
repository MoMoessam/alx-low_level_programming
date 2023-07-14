#include <stdio.h>

/*
   *
   */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		while (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			break;
		}
	}

	putchar('\n');

	return (0);
}

