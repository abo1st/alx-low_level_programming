#include "main.h"

/**
 * create_file - This creates the required file.
 * @filename: This is the required filename.
 * @text_content: This is the content written in the file.
 * Return: 1 if it is success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	int nls;
	int b;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nls = 0; text_content[nls]; nls++)
		;

	b = write(a, text_content, nls);

	if (b == -1)
		return (-1);

	close(a);

	return (1);
}
