#include "main.h"

/**
 * cat_number - Convert a long integer to a character string
 * @num: The long integer to be converted
 * @count: The current character count (used for tracking characters printed)
 * Return: 1 always
 */
int cat_number(long num, int count)
{
	if (num < 0)
	{
		_output('-');
		count++;
		num = num * -1;
	}
	if (num / 10)
	{
		count = cat_number(num / 10, count);
	}
	_output(num % 10 + '0');
	return (count + 1);
}
