/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:51:01 by halramli          #+#    #+#             */
/*   Updated: 2023/02/02 12:51:08 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(unsigned int nb, char ch)
{
	char	*vx;

	if (ch == 'X')
		vx = "0123456789ABCDEF";
	else
		vx = "0123456789abcdef";
	if (!(nb / 16))
	{
		write(1, &vx[nb], 1);
	}
	else
	{
		print_hex(nb / 16, ch);
		print_hex(nb % 16, ch);
	}
}

int	ft_putnbr_x_printf(va_list ap, char c)
{
	int				val;
	unsigned int	nb;

	val = 0;
	nb = va_arg(ap, unsigned int);
	print_hex(nb, c);
	while (nb / 16)
	{
		val++;
		nb = nb / 16;
	}
	return (++val);
}
