#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes char to stdout
 * @c: The character to print
 *
 * Return: Success always 1.
 * On error, -1 is returned, and errno is set directly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


