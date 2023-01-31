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

int	ft_putnbr_printf(int nb)
{
    int val;

    val = 0;
	if (nb == -2147483648)
	{
		val = ft_putstr_printf("-2147483648");
        return (val);
	}
	if (nb < 0)
	{
		val = val + ft_putchar_printf('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		val = val + ft_putnbr_printf(nb / 10);
     
		val = val + ft_putnbr_printf(nb % 10);
	}
	else
	{
		val = val + ft_putchar_printf(nb + 48);
	}
    return (val);
}
