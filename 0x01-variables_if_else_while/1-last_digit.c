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

	int last_digit = n % 10;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5", str, n, last_digit);
	}
	else if (last_digit < 6 && last_digit > 0)
	{
		printf("%s %d is %d and less than 6 and not 0", str, n, last_digit);
	}
	else
	{
		printf("%s %d is %d and is 0", str, n, last_digit);
	}

	/* your code goes there */
	return (0);
}
