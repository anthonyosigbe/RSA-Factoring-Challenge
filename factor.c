#include "factor.h"

/**
 * main - Entry point of the program
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, EXIT_FAILURE on failure
 */

int main(int argc, char *argv[])
{
    FILE *fptr;
    size_t count = 0;
    ssize_t line;
    char *buffer = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return (1);
    }

    fptr = fopen(argv[1], "r");

    if (fptr == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return (1);
    }
    while ((line = getline(&buffer, &count, fptr)) != -1)
    {
        factorize_number(buffer);
    }
    free(buffer);
    fclose(fptr);
    return (0);
}

