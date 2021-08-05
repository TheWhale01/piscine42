#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 1)
        write(1, "a", 1);
    else
        while (*av[1])
            if (*av[1]++ == 'a')
                write(1, "a", 1);
    write(1, "\n", 1);
    return (0);
}