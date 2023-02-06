/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:32:29 by halramli          #+#    #+#             */
/*   Updated: 2023/02/02 16:33:33 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(unsigned long nb)
{
	char	*vx;

	vx = "0123456789abcdef";
	if (!(nb / 16))
	{
		write(1, &vx[nb], 1);
	}
	else
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
}

int	ft_put_p_printf(va_list ap)
{
	unsigned long	p;
	int				val;

	p = (unsigned long) va_arg(ap, void *);
	write(1, "0x", 2);
	val = 2;
	print_hex (p);
	while (p / 16)
	{
		val++;
		p = p / 16;
	}
	return (++val);
}
