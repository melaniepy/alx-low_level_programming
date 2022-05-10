alx-low_level_programming/0x0B-malloc_free/main.h
@themfon
themfon malloc protoype fuctions
Latest commit a977f77 on Apr 5
 History
 1 contributor
Executable File  12 lines (10 sloc)  297 Bytes
   
#ifndef _MAIN_H_
#define _MAIN_H_

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
