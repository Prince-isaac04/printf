#include "main.h"

/**
 * pick - Function to choose a handler based on input character
 * @str: The character specifier to determine the handler function
 * Return: A pointer to the selected handler function.
 *         If 'str' is not 'c', 'd', or 's', it returns NULL (0).
 */

int (*pick(char str))(va_list set)
{
	if (str == 'c')
	{
		return (&cr_handler);
	}
	else if (str == 'd')
	{
		return (&dr_handler);
	}
	else if (str == 's')
	{
		return (&put_handle);
	}
	else if (str == 'i')
	{
		return (&ir_handle);
	}
	return (NULL);
}
