#include <stdio.h>

/**
 * main - Entry point
 * Description: code will print alphabet in lowercase
 * Retutn: Always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar("\n");
	return (0);
}
