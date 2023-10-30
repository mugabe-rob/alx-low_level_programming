#include<stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appending text at the end of a file
 * @filename: The name of the file.
 * @text_content: The added content.
 * Return: 1 if the file exists or -1 if the fails does not exist.
 */
	int append_text_to_file(const char *filename, char *text_content)
	{
	int counter;
	int numberofletters;
	int mgb;

	if (!filename)
		return (-1);

	counter = open(filename, O_WRONLY | O_APPEND);

	if (counter == -1)
		return (-1);

	if (text_content)
	{
		for (numberofletters = 0; text_content[numberofletters]; numberofletters++)
			;

		mgb = write(counter, text_content, numberofletters);

		if (mgb == -1)
			return (-1);
	}

	close(counter);

	return (1);
}
