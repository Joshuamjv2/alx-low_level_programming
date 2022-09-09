#include <stdio.h>

/**
 *main - print size
 *
 * Description: Printing size of various types
 *
 * Return: 0
 */

int main(void)
{	int integer;
	float flt;
	char ch;
	long lng;
	long long longdb;

	printf("Print size of a char: %d bytes(s)\n", sizeof(ch));
	printf("Size of an int: %d bytes(s)\n", sizeof(integer));
	printf("Size of a long int: %d bytes(s)\n", sizeof(lng));
	printf("Size of a long long int: bytes(s)\n", sizeof(longdb));
	printf("Size of a float: %d bytes(s)\n", sizeof(flt));
	return (0);
}
