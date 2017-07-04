#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Create `filename' with content from `text_content'
 * @filename: name of file to create
 * @text_content: content to insert into file `filename'
 *
 * Return: 1 on success, -1 if error occurs using `write`.
 */
int create_file(const char *filename, char *text_content)
{
	size_t i = 0;
	ssize_t w = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content && text_content[i]; i++)
		;
	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (i)
		w = write(fd, text_content, i);
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
