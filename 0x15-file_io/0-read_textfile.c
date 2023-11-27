#include "main.h"

ssize_t print_and_read(int file_descriptor, char *buffers, size_t letters);

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file to read
 * @letters:number of letters to read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t result;
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

	result = print_and_read(file_descriptor, buffer, letters);

	close(file_descriptor);
	free(buffer);

	return (result);
}

/**
 * print_and_read - a helping function to print and read a file
 * @file_descriptor: the file descriptor
 * @buffer: the buffer
 * @letters: the letters
 * Return: the read file
*/

ssize_t print_and_read(int file_descriptor, char *buffer, size_t letters)
{
	ssize_t bytes_written, file_read;

	file_read = read(file_descriptor, buffer, letters);
	if (file_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	buffer[file_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, file_read);
	if (bytes_written == -1 || bytes_written != file_read)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	return (file_read);
}
