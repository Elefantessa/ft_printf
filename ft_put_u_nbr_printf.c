/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:30:06 by halramli          #+#    #+#             */
/*   Updated: 2023/02/01 15:31:08 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		ft_putchar_fd(c, 1);
	}
	else
	{
		ft_putnbr_u((n / 10));
		ft_putnbr_u((n % 10));
	}
}

int	ft_put_u_nbr_printf(va_list ap)
{
	unsigned int	nb;
	int				val;

	nb = va_arg(ap, unsigned int);
	val = 0;
	ft_putnbr_u(nb);
	while (nb / 10)
	{
		val++;
		nb = nb / 10;
	}
	return (++val);
}
