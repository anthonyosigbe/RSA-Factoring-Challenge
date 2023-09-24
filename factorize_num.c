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

	u_int32_t num;
	u_int32_t i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num '/'i, i);
			break;
		}
	}
	return (0);
}
