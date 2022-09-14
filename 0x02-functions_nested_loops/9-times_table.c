#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int num, word, gold;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (word = 1; word <= 9; word++)
		{
			_putchar(',');
			_putchar(' ');

			gold = num * word;

			if (gold <= 9)
				_putchar(' ');
			else
				_putchar(gold / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
