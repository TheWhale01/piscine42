#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

int pop(void);
int push(int value);
int ft_strlen(char *str);
int set_stack(char *str);
int get_numbers(char *str);
int check(char **av, int stack_size);
int push_oprators(char *str, int len);

#endif