/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:52:32 by halramli          #+#    #+#             */
/*   Updated: 2023/01/13 15:52:35 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;
	unsigned int	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		start = 0;
		len = 0;
	}
	if (len > len_s - start)
		len = len_s - start;
	strsub = malloc(sizeof(*strsub) * (len + 1));
	if (!strsub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < (unsigned int)len)
	{
		strsub[i] = s[start + i];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}
