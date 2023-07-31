#include "main.h"
/**
  * _isdigit - determines if its a didgit or not
  *
  *@c: variable going into the fuction
  *
  * Return: returns 1 if c is a digit and 0 if no
  *
  */
int _isdigit(int c)
{
	int i;

	if (c <= 9 && c >= 0)
		i = 1;
	else
		i = 0;

	return (i);
}
