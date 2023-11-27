#include "main.h"
int _strlen(char *str);

/**
 * create_file - a function that creates a file.
 * @filename: name of file to create
 * @text_content: nll terminatd string to write to the file
 * Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	mode_t mode = S_IRUSR | S_IWUSR;
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);

}

/**
 * _strlen - a function to check length of string
 * @str: string to check
 * Return: length of the string
*/

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}
