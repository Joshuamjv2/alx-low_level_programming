#include <stdio.h>

/**
 * main - Alphabets except q and e
 *
 * Description: Print alphabets except q and e
 *
 * Return: 0
 */

int main(void)

{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
