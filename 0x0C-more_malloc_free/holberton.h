#ifndef HOLBERTON_H
#define HOLBERTON_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void error(void);
void _puts(char *s);
char *inf_mul(char *s1, char *s2);
char *inf_add(char *n1, char *n2);
void shiftR(char *s, int c);
int count(char *s);
char *carryTheOne(char *r, int j, int size_r);
int _putchar(char c);
int check(char *s);
int _strcmp(char *s1, char *s2);
char *cmul(char c1, char c2);
char *place(char *s, int zeros);

#endif
