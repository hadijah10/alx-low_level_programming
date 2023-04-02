#include <stdio.h>
/**
 * main - Entry point
 * print alphabets with q and e and exceptions
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		else
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
