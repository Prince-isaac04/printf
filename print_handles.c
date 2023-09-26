#include "main.h"

/**
 * cr_handler - Handles 'c' conversion specifier
 * @set: va_list containing the argument
 *
 * This function retrieves a character from the va_list, calls _output to
 * process it, and returns the count from _output.
 *
 * Return: The count from _output function.
 */
int cr_handler(va_list set)
{
	int cot;
	char get_char = va_arg(set, int);

	cot = _output(get_char);
	return (cot);
}

/**
 * dr_handler - HanYYYdles 'd' conversion specifier
 * @set: va_list containing the argument
 *
 * This function retrieves an integer from the va_list, calls cat_number to
 * process it, and returns the result from cat_number.
 *
 * Return: The result from cat_number function.
 */
int dr_handler(va_list set)
{
	int i;
	int val = va_arg(set, int);

	i = cat_number(val, 0);
	return (i);
}

/**
 * put_handle - Handles 's' conversion specifier
 * @set: va_list containing the argument
 *
 * This function retrieves a string from the va_list, handles NULL pointer,
 * and processes the string character by character using _output.
 *
 * Return: The total count of characters processed by _output.
 */
int put_handle(va_list set)
{
	int i = 0;
	char *ptr = va_arg(set, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}

	while (*ptr)
	{
		i += _output(*ptr);
		ptr++;
	}

	return (i);
}

/**
 * ir_handle - Handle an integer argume
 * @set: A va_list representing the variabls list.
 * @val: The integer argument retrieved from va_list.
 * @cot: The count of digits in teger.
 * Return: The count of digits in the integer.
 */
int ir_handle(va_list set)
{
	int cot;
	int val = va_arg(set, int);
	cot = cat_number(val, 0);
	return cot;
}
