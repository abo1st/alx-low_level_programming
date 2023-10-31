#include "main.h"

/**
 * read_textfile - This reads a text file and prints the required letters.
 * @filename: The required filename.
 * @letters: This is the numbers of letters to be printed.
 * Return: The numbers of letters printed. If it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b, c;
	char *buf;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	close(a);

	free(buf);

	return (c);
}
