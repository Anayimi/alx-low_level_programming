#include <unistd.h>
3include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
