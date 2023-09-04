#include "main.h"
/**
  * read_textfile - reads text file
  * @filename: file
  * @letters: content
  * Return: returns number of letters otherwise 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *poem;
	int fd = 0;
	ssize_t store;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	poem = malloc(letters);

	if (poem == NULL)
	{
		close(fd);
		return (0);
	}
	store = read(fd, poem, letters);
	if (store == -1)
	{
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, poem, store);
	close(fd);
	free(poem);
	return (store);
}
