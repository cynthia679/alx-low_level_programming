#include <stdio.h>
/*
 * main - A program that prints various computer types
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %zu bytes(s)\n", sizeof(a));
printf("Size of an int: %zu bytes(s)\n", sizeof(b));
printf("Size of a long int: %zu bytes(s)\n", sizeof(c));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(d));
printf("Size of a float: %zu bytes(s)\n", sizeof(f));
 return (0);
}       	       
