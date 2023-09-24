#include "main.h"

/**
 * _output - Write a character to the standard output
 * @c: The character to be written
 * @c: The character to be written to the standard output
 * Return: Always returns 1
 */

int _output(char c)
{
	write(1, &c, 1);
	return (1);
}

