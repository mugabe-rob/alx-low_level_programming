#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

	int main(void)
{
	char *pass = malloc(sizeof(char) * 5);
	char c[5] = {'H', 'o', 'l', 4, '\0'}, run[100];
	int counter;

	for (counter = 0; c[counter]; counter++)
	pass[counter] = c[counter];

	pass[counter] = '\0';

	sprintf(run, "echo %s > 101-password", pass);
	system(run);

	return (0);
}
