/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:01:54 by halramli          #+#    #+#             */
/*   Updated: 2023/01/30 13:01:58 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#   define LIBFTPRINTF_H
#   include "libft/libft.h"
#	include <stdarg.h>
// should be removed.
#   include <stdio.h>
#   include <limits.h>



int	ft_printf(const char *format, ...);
int	ft_putchar_printf(va_list ap);
int	ft_putstr_printf(va_list);
int	ft_putnbr_printf(va_list ap);
int	ft_put_u_nbr_printf(va_list ap);
int	ft_putnbr_x_printf(va_list ap, char c);

#endif
