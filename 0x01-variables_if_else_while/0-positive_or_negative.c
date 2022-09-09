#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 *main - printing random number

Description: This function prints a random number

Return: 0
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
	} else
	{
		answer "is negative";
	}
	printf("%d %s\n", n, answer);
	/* your code goes there */
	return (0);
}
