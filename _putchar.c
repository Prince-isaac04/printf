#include<unistd.h>
/**
 * _putchar - print character c
 * @c: charac ter to print
 * return: success 1
 */ 

int _putchar(char c)
{
	return (write(1, &c, 1));
}
