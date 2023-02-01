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

int	ft_put_u_nbr_printf(va_list ap)
{
	unsigned int	nb;
	int				val;
	int				count;

	nb = va_arg(ap,unsigned int);
	val = 0;
	count = 10;
	while (nb % (10 * count) == nb)
	{
		count --;
	}
	
	return (val);
}