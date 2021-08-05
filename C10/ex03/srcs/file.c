#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "basic.h"

int file_len(char *filename)
{
	int fd;
	int len;
	int bytes;
	char buff[2048];

	if ((fd = open(filename, O_RDONLY)) < 0)
		return (0);
	len = 0;
	while ((bytes = read(fd, buff, 2048)) > 0)
		len += bytes;
	close(fd);
	return (len);
}

char *read_file(char *filename)
{
	int fd;
	int len;
	char *content;

	if ((fd = open(filename, O_RDONLY)) < 0)
		return (0);
	len = file_len(filename);
	if (!(content = malloc(sizeof(char) * len)))
		return (0);
	if (read(fd, content, len) < 0)
		return (0);
	close(fd);
	return (content);
}