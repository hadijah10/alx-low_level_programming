#include <stdio.h>
/**
 * main - Entry point
 * combine numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;
	int s;
	int t;

	for (f = 48; f <= 55; f++)
	{
		for (s = 49; s <= 56; s++)
		{
			for (t = 48; t <= 57; t++)
			{
				if (t > s && s > f)
				{
					putchar(f);
					putchar(s);
					putchar(t);
					if (f == 55 && s == 56 && t == 57)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
