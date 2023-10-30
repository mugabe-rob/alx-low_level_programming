#include<stdio.h>
#include "main.h"

/**
 * read_textfile - Reading the text file and prints the letters
 * @filename: The filename.
 * @letters: The number of letters that are printed.
 *
 * Return: numbers of letters printed.
 */
	ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t mynrd, mgb;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	mynrd = read(file, buf, letters);
	mgb = write(STDOUT_FILENO, buf, mynrd);

	close(file);

	free(buf);

	return (mgb);
}
