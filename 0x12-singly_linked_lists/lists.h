#ifndef ALX_H
#define ALX_H
#include <stdio.h>
#include <stdlib.h>
typedef struct size_t
{
 char *str;
 unsigned  int len;
 struct list_s *next;
}list_t;
size_t print_list(const list_t *h);

#endif
