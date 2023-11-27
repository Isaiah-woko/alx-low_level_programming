#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file to read
 * @letters:number of letters to read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_written, file_read;
	int file_descriptor;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	file_read = read(file_descriptor, buffer, letters);
	if (file_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	buffer[file_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, file_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)file_read)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	close(file_descriptor);
	free(buffer);

	return (file_read);
}
