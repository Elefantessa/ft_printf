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

#   include <stdio.h>


int     ft_printf(const char *format, ...);
int     ft_putchar_printf(char c);
int    ft_putstr_printf(char *s);
int     ft_putnbr_printf(int nb);

#endif
