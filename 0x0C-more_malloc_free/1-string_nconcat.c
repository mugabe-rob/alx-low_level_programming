#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -joins n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		a = malloc(sizeof(char) * (len1 + n + 1));
	else
		a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!a)
		return (NULL);

	while (b < len1)
	{
		a[b] = s1[b];
		b++;
	}

	while (n < len2 && b < (len1 + n))
		a[b++] = s2[j++];

	while (n >= len2 && b < (len1 + len2))
		a[b++] = s2[j++];

	a[b] = '\0';

	return (a);
}

