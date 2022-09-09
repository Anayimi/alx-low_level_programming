#include <stdio.h>

/**
 * main - Entry point
 * Description: code will print alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
