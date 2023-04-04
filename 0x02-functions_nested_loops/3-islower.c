#include "main.h"
/**
 * _islower - Shows 1 if input is a
 * lowecase letter otherwise shows 0
 *
 *@c: The character in ASCCII code
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
