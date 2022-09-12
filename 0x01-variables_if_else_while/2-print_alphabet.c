#include <stdio.h>
#include <string.h>

/**
 * main - using putchar
 *
 * Description: Print each item in alphablets
 *
 * Return: 0
 */

int main(void)

{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		putchar(ch);

	}

	putchar('\n');

	return (0);
}
