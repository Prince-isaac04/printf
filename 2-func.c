#include <stdio.h>
#include "main.h"

/**** WRITE HANDLE ***/
/**
* handle_char_insert - Prints a string
* @c: char types.
* @input: Buffer array to handle print
* @flags:  Calculates active flags.
* @width: get width.
* @precribe: precision specifier.
* @size: Size specifier
*
* Return: Number of chars printed.
*/
int handle_char_insert(char c, char input[],
int flags, int width, int precribe, int size)
{
/* char is stored at left and paddind at buffer's right */
int m = 0;
char pads = ' ';

UNUSED(precribe);
UNUSED(size);

if (flags & F_ZERO)
pads = '0';

input[m++] = c;
input[m] = '\0';

if (width > 1)
{
input[BUFF_SIZE - 1] = '\0';
for (m = 0; i < width - 1; m++)
input[BUFF_SIZE - i - 2] = pads;

if (flags & F_MINUS)
return (write(1, &input[0], 1) +
write(1, &input[BUFF_SIZE - i - 1], width - 1));
else
return (write(1, &input[BUFF_SIZE - i - 1], width - 1) +
write(1, &input[0], 1));
}

return (write(1, &input[0], 1));
}
