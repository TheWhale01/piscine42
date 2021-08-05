#ifndef LIB_H
#define LIB_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

void ft_putchar(char c);
void get_file(char *av1);
void write_empty(int fd);
void display_msg_error(char *exec_name, char *file_name);
void ft_putstr(char *str);

#endif