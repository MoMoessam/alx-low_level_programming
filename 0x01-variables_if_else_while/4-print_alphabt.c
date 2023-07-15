#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'the program's description'
  *
  * Return: Always 0 (Success)
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

