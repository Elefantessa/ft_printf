/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:21:16 by halramli          #+#    #+#             */
/*   Updated: 2023/01/13 17:25:24 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intheset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	trim_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && intheset(s1[start], set))
		start++;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	last;
	size_t	s1len;
	size_t	i;
	char	*str;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	last = s1len;
	start = trim_start (s1, set);
	if (start != s1len)
	{
		while (s1[last - 1] && intheset(s1[last - 1], set))
		last--;
	}
	str = malloc (sizeof(*str) * (last - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < last)
		str [i++] = s1[start ++];
	str [i] = '\0';
	return (str);
}
