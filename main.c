#include "ft_printf.h"

int main ()
{
  int x;
  int y;
  void *p;
  p = &y;

   x = ft_printf(" |%u| \n", 100);
   y =  printf(" |%u| \n", 100);
   printf("x is  |%d|  y is |%d|",x,y);
	return (0);
} 