#include <stdio.h>

/**
 * main - Entry point
 * Description: code will print alphabet in lowercase
 * Retutn: Always 0
 */

int main(void)
{
	char gold;

	for (gold = 'a'; gold <= 'z'; gold++)
		putchar(gold);
	putchar("\n");
	return (0);
}
