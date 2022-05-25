#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
typedef struct list_s{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;
int _putchar(char);
size_t list_len(const list_t *h);
#endif