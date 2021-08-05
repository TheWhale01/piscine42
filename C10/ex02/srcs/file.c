#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "basic.h"

void no_file(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		;
}

int file_len(char *filename)
{
	int fd;
	int len;
	int bytes;
	char buff[2048];

	if ((fd = open(filename, O_RDONLY)) < 0)
		return (-1);
	len = 0;
	while ((bytes = read(fd, buff, 2048)) > 0)
		len += bytes;
	close(fd);
	return (len);
}

char *load_file(char *filename, int len)
{
	int fd;
	char *buff;

	if (!filename)
		no_file();
	if ((fd = open(filename, O_RDONLY)) < 0)
		return (0);
	if (!(buff = malloc(sizeof(char) * len)))
		return (0);
	read(fd, buff, len);
	close(fd);
	return (buff);
}

void header(char *filename)
{
	ft_putstr("===> ");
	ft_putstr(filename);
	ft_putstr(" <===\n");
}