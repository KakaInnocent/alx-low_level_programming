#include "main.h"

/**
 *err_file - checks whether a file is accessible
 *@file_frm: source of the file
 *@file_t: destination of the file
 *@argv: arguments vector
 *Return: no return
 */
void err_file(int file_frm, int file_t, char *argv[])
{
	if (file_frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from %s\n", argv[1]);
		exit(98);
	}
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *main -checks the code
 *@argc: number of arguments
 *@argv: arguments vector
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int file_frm, file_t err_exit;
	ssize_t m, k;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_frm file_t");
		exit(97);
	}

	file_frm = open(argv[1], O_RDONLY);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_frm, file_t, argv);

	m = 1024;
	while (m == 1024)
	{
		m = read(file_frm, buf, 1024);
		if (m == -1)
			err_file(-1, 0, argv);
		k = write(file_t, buf, m);
		if (k == -1)
			err_file(0, -1, argv);
	}

	err_exit = close(file_frm);
	if (err_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close df %d\n", file_frm);
		exit(100);
	}

	err_exit = close(file_t);
	if (err_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close df %d\n", file_frm);
		exit(100);
	}
	return (0);
}
