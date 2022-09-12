#include <stdlib.h>
#include <time.h>


/**
 * main - print zero, positive or negative
 *
 * Description: this is the if else statement
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char answer[40];

	answer = "is zero";
	if (n > 0)
	{
		answer = "is positiver";
	}
	else
	{
		answer "is negative";
	}
	printf("%d %s\n", n, answer);
	/* your code goes there */
	return (0);
}
