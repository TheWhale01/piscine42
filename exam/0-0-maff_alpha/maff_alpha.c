#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    int i;

    i = -1;
    while (++i < 26)
    {
        if (i % 2 == 1)
            ft_putchar(i + 'a' - ('a' - 'A'));
        else
            ft_putchar(i + 'a');
    }
    ft_putchar('\n');
    return (0);
}