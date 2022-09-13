#include <stdio.h>

/**
 * main - use putchar
 *
 * Description: print single digit numbers using putchar
 *
 * Return: 0
 */

int main(void)

{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
