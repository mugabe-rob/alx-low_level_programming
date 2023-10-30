#include<stdio.h>
#include "main.h"

/**
 * create_file - Creating a file
 * @filename: The name of the file.
 * @text_content: The content writed in the file.
 * Return: 1 if it success or -1 if it fails.
 */
	int create_file(const char *filename, char *text_content)
	{
	int counter;
	int numberofletters;
	int q;

	if (!filename)
		return (-1);

	counter = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (counter == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numberofletters = 0; text_content[numberofletters]; numberofletters++)
		;

	q = write(counter, text_content, numberofletters);

	if (q == -1)
		return (-1);

	close(counter);

	return (1);
}
