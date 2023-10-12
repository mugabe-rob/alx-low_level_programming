#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints the numbers and then followed by a new line.
 * @separator: The string to be printed.
 * @n: The number of the ints that are passed to the function.
 * @...: A variable number to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int z;

	va_start(nums, n);

	for (z = 0; z < n; z++)
	{
		printf("%d", va_arg(nums, int));

		if (z != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

