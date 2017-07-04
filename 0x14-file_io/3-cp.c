#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define READ_NBYTES 1204

/**
 * main - copy content of one file into another
 * @argc: count of arguments to program
 * @argv: array of arguments to program
 *
 * Return: EXIT_SUCCESS on success, exit with error number, otherwise.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	char buf[READ_NBYTES];
	ssize_t r;
	int fdr, fdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fdr = open(file_from, O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	fdw = creat(file_to, 00664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(fdr, buf, READ_NBYTES)))
		if (write(fdw, buf, r) != r)
			break;
	if (close(fdw))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	if (close(fdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
