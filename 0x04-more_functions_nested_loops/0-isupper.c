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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (0);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	else 
		return (0);
}
