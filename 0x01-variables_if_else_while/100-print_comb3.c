#include <stdio.h>
/**
 * main - Entry point
 * display numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;
	int s;

	for (f = 48; f <= 56; f++)
	{
		for (s = 49; s <= 57; s++)
		{
			if (f >= 49 && s <= f)
			{
				continue;
			}
			if (f == 56)
			{
				if (s >= 48 && s <= 56)
				{
					continue;
				}
			}
			putchar(f);
			putchar(s);
			if (f == 56 && s == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
