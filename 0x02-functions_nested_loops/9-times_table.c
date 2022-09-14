#include "main.h"

/**
 * times_table - prints the 9 times table
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

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
