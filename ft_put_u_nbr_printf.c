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

#include "libftprintf.h"

int    ft_put_u_nbr_printf(va_list ap)
{
	unsigned int    nb;
	int                val;
	int                count;
	int                mod;

	nb = va_arg(ap,unsigned int);
	val = 0;
	count = 1000000000;
	while (nb % count == nb)
	{
		count = count / 10; 
	}
	mod = nb % count;
	while (mod && count)
	{
		ft_putchar_fd('0' + (nb / count), 1);
		val++;
		count = count / 10;
		nb = mod;
		mod = mod %  count;
	}
	val++;
	return (val);
}