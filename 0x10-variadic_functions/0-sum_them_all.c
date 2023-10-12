#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Prints the sum of all it's numbers
 * @n: The number of paramters that are passed  to a function
 * @...: A variable number of parameters.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int q, sum = 0;

	va_start(ap, n);

	for (q = 0; q < n; q++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

