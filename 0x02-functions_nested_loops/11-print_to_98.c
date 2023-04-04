#include "main.h"
/**
 * print_to_98 - Prints the natural
 * numbers from n to 98
 *
 * @n: input as integer
 *
 * Return: no return
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i <= 0)
			break;
		_putchar(i + 48);
		if (i >= 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
}
