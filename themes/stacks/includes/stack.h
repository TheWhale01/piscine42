#ifndef STACK_H
#define STACK_H

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;
typedef t_list *t_stack;

#endif