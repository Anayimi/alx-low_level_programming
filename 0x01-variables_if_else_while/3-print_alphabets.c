#include <stdio.h>

/**
 * main - Entry point
 * Description: code will print lowercase and then uppercase alphabet
 * Return: Always o (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
