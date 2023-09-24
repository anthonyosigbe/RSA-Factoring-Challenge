#include "factor.h"

/**
 * factorize_number - This function decomposes a given number into its factors.
 * @buffer: A pointer to the memory location where the number is stored.
 *
 * Return: An integer indicating the success or,
 * failure of the factorization.
 */

int factorize_number(char *buffer)
{
	uint32_t num;
	uint32_t i;

	num = atoi(buffer);

	if (num < 2)
	{
		printf("Number must be greater than or equal to 2\n");
		return (-1);
	}

	for (i = 2; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			num /= i;
		}
		if (num > 1)
		{
			printf("%d=%d*%d\n", num, num, 1);
		}
	}
	return (0);
}
