#ifndef __FILE_H__
#define __FILE_H__

void header(char *filename);

int file_len(char *filename);

char *load_file(char *filename, int len);

#endif