#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the sizes of computer types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %1u bytes(s)\n", sizeof(char));
	printf("Size of an int: %1u byte(s)\n", sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", sizeof(long int));
	printf("Size of a  long long int: %1u byte(s)\n" sizeof(long long int));
	printf("Size of a float: %1u byte(s)\n", sizeof(float));
	return (0);
}

