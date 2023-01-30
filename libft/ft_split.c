/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <halramli@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:51:01 by halramli          #+#    #+#             */
/*   Updated: 2023/01/22 19:16:06 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_count(const char *s, char c)
{
	unsigned int	i;
	size_t			w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w += 1;
		while (s[i] != c && s[i + 1])
			i += 1;
		i += 1;
	}
	return (w);
}

static char	**ft_free_all(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i <= j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_strsplit(char const *s, char c, size_t i, size_t j)
{
	char	**tab;
	int		lslen;

	tab = malloc(sizeof(*tab) * (ft_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
		}
		lslen = ft_len(&s[i], c);
		if (lslen > 0)
		{
			tab[j] = ft_substr(s, i, lslen);
			if (!tab[j])
				return (ft_free_all(tab, j));
			j++;
			i = i + lslen;
		}
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	return (ft_strsplit(s, c, i, j));
}

/*  int main() {
  char str[] = "strtok needs tod";
  char c1 = ' ';
  char **c;
  c = ft_split(str, c1);
  return 0;
} */
