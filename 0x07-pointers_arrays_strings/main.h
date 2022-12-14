#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);

#endif /* MAIN_H */
