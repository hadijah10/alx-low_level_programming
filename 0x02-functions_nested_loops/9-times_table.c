#include "main.h"
/**
 * times_table - Prints the
 * times table to 9
 *
 * Return: no return
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + 48);
			if ((i == 9) && (j == 9))
				break;
			_putchar(',');
			_putchar(' ');
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
