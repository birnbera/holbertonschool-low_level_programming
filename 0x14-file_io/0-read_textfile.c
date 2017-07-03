#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a text file and print to STDOUT.
 * @filename: path of filename to read.
 * @letter: number of letters to read and write.
 *
 * Return: 0 if `filename' is NULL orcannot be opened or read,
 * 0 if call to write fails or is less than the expected number
 * of bytes, or the total number of bytes used to call write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	if (w != r)
		return (0);
	return (r);
}
