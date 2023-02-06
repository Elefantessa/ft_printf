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

#include "ft_printf.h"

static int	check_type(va_list ap, char c)
{
	int	val;

	val = -1;
	if (c == 'c')
		val = ft_putchar_printf(ap);
	else if (c == 's')
		val = ft_putstr_printf(ap);
	else if (c == 'i' || c == 'd')
		val = ft_putnbr_printf(ap);
	else if (c == 'u')
		val = ft_put_u_nbr_printf(ap);
	else if (c == 'x' || c == 'X')
		val = ft_putnbr_x_printf(ap, c);
	else if (c == 'p')
		val = ft_put_p_printf(ap);
	else if (c == '%')
	{
		write(1, "%", 1);
		val = 1;
	}
	return (val);
}

static int	parse_string(const char *format, va_list ap, int retval)
{
	int		res;

	res = 0;
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
	return (retval);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		retval;

	retval = 0;
	va_start(ap, format);
	retval = parse_string(format, ap, retval);
	va_end(ap);
	return (retval);
}
