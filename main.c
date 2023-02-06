#include "ft_printf.h"

int main ()
{
  int x;
  int y;
  void *p;
  p = &y;

   x = ft_printf(" NULL |%s| NULL \n", NULL);
   y =  printf(" NULL |%s| NULL \n", NULL);
   printf("x is  |%d|  y is |%d|",x,y);
	return (0);
} 