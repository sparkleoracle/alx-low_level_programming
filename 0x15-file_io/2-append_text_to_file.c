#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * where filename is the name of the file and text_content is the NULL,
 * terminated string to add at the end of the file
 * @filename: variable pointer
 * @text_content: content file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j = 0, file_d;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[j] != '\0')
	{
		j++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	write(file_d, text_content, j);

	return (1);
}
