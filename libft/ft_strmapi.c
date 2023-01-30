/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:21 by halramli          #+#    #+#             */
/*   Updated: 2023/01/17 12:06:25 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			slen;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	str = malloc(sizeof(*str) * (slen + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[slen] = '\0';
	return (str);
}
