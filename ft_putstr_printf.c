/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:01:13 by halramli          #+#    #+#             */
/*   Updated: 2023/01/31 17:01:17 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr_printf(char *s)
{
	int len;

	len = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	write (1, s,len);
	return (len);
}
