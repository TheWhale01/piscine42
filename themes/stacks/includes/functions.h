#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define INT_MIN -2147483648

void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);

int pop(t_stack *stack);
int push(t_stack *stack, int value);

#endif