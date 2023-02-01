/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:19:27 by halramli          #+#    #+#             */
/*   Updated: 2023/01/31 17:19:31 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_printf(va_list ap)
{
	int	nb;
    int val;

	nb = va_arg(ap, int);
    val = 0;
	if (nb == -2147483648)
	{
		ft_putstr_fd( "-2147483648", 1);
        return (11);
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar_fd(nb + 48, 1);
		return (1);
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		val = 1;
		nb *= -1;
	}
	ft_putnbr_fd(nb, 1);
	while (nb / 10)
	{
		++val;
		nb = nb / 10;
	}
	val ++;
	
    return (val);
}
