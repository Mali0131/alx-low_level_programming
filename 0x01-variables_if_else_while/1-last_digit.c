#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/**
 * main - print the last digit of the number in the variable
 *
 * and print the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("last digit of %d is %d and is 5\n", n, ld);    
	else if (ld < 5 && ld != 0)
		printf("last digit of %d is %d and is less than 5 and not 0\n", n, ld);
	else             
		printf("last digit of %d is %d and is 0\n", n, ld);

	return (0);
}
