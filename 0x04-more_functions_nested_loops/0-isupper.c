#include "main.h"
/**
  * _isupper - checks whether c is upper or lowercase
  *
  *@c: the number being checked
  *
  * Return: gives 0 if lowercase and 1 if uppercase
  */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
