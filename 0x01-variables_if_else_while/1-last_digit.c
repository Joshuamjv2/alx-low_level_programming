#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Last digit
 *
 * Description: Print string based on last digit
 *
 * Return: 0
 */

int main(void)

{
	int n;

	char str[] = "Last digit of";

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("%s %d is %d and less than 6 and not 0\n", str, n, n % 10);
	}
	else
	{
		printf("%s %d is %d and is 0\n", str, n, n % 10);
	}

	/* your code goes there */
	return (0);
}
