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

#include "ft_printf.h"

int	ft_putstr_printf(va_list ap)
{
	int		len;
	char	*s;

	s = va_arg(ap, char *);
	len = 0;
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
