#ifndef LIB_H
#define LIB_H

int mod(int a, int b);
int mul(int a, int b);
int add(int a, int b);
int sub(int a, int b);
int ft_div(int a, int b);
int errors(int ac, char **av);
int do_op(int a, int b, int (*op)(int, int));

#endif