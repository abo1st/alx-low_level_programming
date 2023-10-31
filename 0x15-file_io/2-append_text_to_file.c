#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file.
 * @filename: This is the filename.
 * @text_content: This is the added content.
 * Return: 1 if the file exists. -1 if the fails does not exist,
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int nls;
	int b;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (nls = 0; text_content[nls]; nls++)
			;

		b = write(a, text_content, nls);

		if (b == -1)
			return (-1);
	}

	close(a);

	return (1);
}
