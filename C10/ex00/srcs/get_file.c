#include "../includes/lib.h"
#include <sys/stat.h>
#include <fcntl.h>

void get_file(char *av1)
{
	int c;
	int fd;

	if ((fd = open(av1, O_RDONLY)) < 0)
	{
		ft_putstr("Cannot read file.\n");
		return;
	}
	while (read(fd, &c, 1) != '\0')
		ft_putchar(c);
	close(fd);
}