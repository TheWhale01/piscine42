#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int line_count)
{
	int i;
	int j;
	int nums[10];
	int num_zero;

	i = 0;
	j = -1;
	num_zero = line_count;
	while ((num_zero = num_zero / 10) > 0)
		i++;
	while (++j < (7 - i))
		ft_putchar('0');
	i = 0;
	while ((line_count = line_count / 10) != 0)
		nums[i++] = line_count % 10;
	while (i > 0)
		ft_putchar(nums[--i] + 48);
	ft_putchar('0');
}

void ft_putstr(char *str, unsigned int i, unsigned int size)
{
	unsigned int j;

	j = 0;
	while (j < 16)
	{
		if (str[i + j] >= 32 && str[i + j] <= 126)
			ft_putchar(str[i + j]);
		else if (i + j < size)
			ft_putchar('.');
		else
			break;
		j++;
	}
}

void display_hex(char *str, char *base_hex, unsigned int i, unsigned int size)
{
	unsigned int j;

	j = 0;
	while (j < 16)
	{
		if (i + j >= size)
			write(1, "\0", 1);
		else if (str[i] != '\0')
		{
			ft_putchar(base_hex[str[i + j] / 16]);
			ft_putchar(base_hex[str[i + j] % 16]);
		}
		if (j % 2 == 1)
			ft_putchar(' ');
		j++;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	char *str;
	int line_count;
	unsigned int i;

	i = -1;
	line_count = 0;
	str = (char *)addr;
	while (++i < size)
	{
		if (i % 16 == 0)
		{
			ft_putnbr(line_count * 10);
			write(1, ": ", 2);
			display_hex(str, "0123456789abcdef", i, size);
			ft_putstr(str, i, size);
			ft_putchar('\n');
			line_count++;
		}
	}
	return (addr);
}
