/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:29:18 by halramli          #+#    #+#             */
/*   Updated: 2023/01/11 14:29:22 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*chr;
	size_t			i;

	i = 0;
	chr = (unsigned char *)b;
	while (i < len)
	{
		chr[i] = c;
		i++;
	}
	return (b);
}
