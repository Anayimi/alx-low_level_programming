#include <stdio.h>

/**
 * main - prints the sum of even valued fibonacci sequence
 *         not exceeding 4000000
 * Return: always 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
