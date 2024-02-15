#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - the main function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the read and printed file
 * @letters: number of letter to be printed and read
 *
 * Return: actual number of letter it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file_d, read_f, write_f;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		free(buffer);
		return (0);
	}

	read_f = read(file_d, buffer, letters);

	write_f = write(STDOUT_FILENO, buffer, read_f);

	close(file_d);

	return (write_f);
}
