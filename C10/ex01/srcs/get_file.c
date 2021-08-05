#include "../includes/lib.h"

void write_empty(int fd)
{
	int c;

	while (read(fd, &c, 1) != '\0')
		ft_putchar(c);
}

void display_msg_error(char *exec_name, char *file_name)
{
	ft_putstr(basename(exec_name));
	ft_putstr(": ");
	ft_putstr(file_name);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putchar('\n');
	errno = 0;
}

void get_file(char *av1)
{
	int c;
	int fd;

	fd = open(av1, O_RDONLY);
	while (read(fd, &c, 1) != '\0')
	{
		if (errno == 21)
		{
			display_msg_error("./ft_display_file", av1);
			return;
		}
		ft_putchar(c);
	}
	close(fd);
}