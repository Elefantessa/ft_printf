/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:51:06 by halramli          #+#    #+#             */
/*   Updated: 2023/01/31 16:51:13 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_printf(va_list ap)
{
    char	c;

    c = va_arg(ap,int);
    if(!c)
        return (0);
	write(1, &c, 1);
    return (1);
}
