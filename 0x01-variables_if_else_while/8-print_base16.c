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
int ch;
int n;

for (ch = 48 ; ch <= 57 ; ch++)
{
	putchar(ch);
}

for (n = 97 ; n <= 102 ; n++)
{
	putchar(n);
}

putchar('\n');

return (0);
}
