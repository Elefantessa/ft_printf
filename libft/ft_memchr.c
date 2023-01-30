/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:25:11 by halramli          #+#    #+#             */
/*   Updated: 2023/01/11 15:25:16 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	temp;

	str = (unsigned char *) s;
	temp = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*str == temp)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
