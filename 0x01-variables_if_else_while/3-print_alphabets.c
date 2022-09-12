#include <stdio.h>

/**
 * main - alphabets upper and lowercase
 *
 * Description: Print both upper and lower case alphabets
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

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{

		putchar(ch);

	}

	putchar('\n');

	return (0);
}
