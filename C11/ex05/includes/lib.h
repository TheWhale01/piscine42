#ifndef LIB_H
#define LIB_H

#include <unistd.h>

int ft_atoi(char *str);
int add(int num1, int num2);
int sub(int num1, int num2);
int div(int num1, int num2);
int mod(int num1, int num2);
int mul(int num1, int num2);
int is_in(char c, char *str);
int error(int ac, char **av);
int do_op(int num1, int num2, int (*f)(int, int));
void ft_putnbr(int nb);
void ft_putstr(char *str);

#endif