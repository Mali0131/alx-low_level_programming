#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("%s%lu%s\n", "size of a char: ", sizeof(char), "byte(s)");
	printf("%s%lu%s\n", "size of an int: ", sizeof(int), "byte(s)");
	printf("%s%lu%s\n", "size of a long int: ", sizeof(long), "byte");
	printf("%s%lu%s\n", "size of a long long int: ", sizeof(long long), "byte(s)");
	printf("%s%lu%s\n", "size of a float: ", sizeof(float), "byte(s)");
	return (0);
}		
