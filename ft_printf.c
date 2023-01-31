/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:38:46 by halramli          #+#    #+#             */
/*   Updated: 2023/01/30 14:38:52 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int  check_type (va_list ap, char c)
{
	int val;

	val = -1;
	if (c == 'c')
	{
		val = ft_putchar_printf(va_arg(ap, int));
	}
	else if (c == 's')
	{
		val =ft_putstr_printf( va_arg(ap, char *));
	}
	else if (c == 'i' || c == 'd')
	{
		val =ft_putnbr_printf( va_arg(ap, int));
	}
	return (val);
}

int     ft_printf(const char *format, ...)
{
	va_list ap;
	int     retval;
	int     res;

	retval = 0;
	res = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			res = check_type (ap, *format);
			if (res < 0)
				return (-1);
			retval = retval + res;
		}
		else
		{
			write (1, format, 1);
			retval ++;
		}
		format++;
	}
	va_end(ap);
	return (retval);
}

#include <stdio.h>
int main ()
{
  int x;
  int y;
   x = ft_printf("ft_printf int :|%d|\n",-2147483648);
   y =  printf ("######## \nprintf int: |%d|\n", -2147483648);
	return (0);
}