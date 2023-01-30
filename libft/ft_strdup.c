/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:08:34 by halramli          #+#    #+#             */
/*   Updated: 2023/01/13 15:08:37 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*strsave;
	int		i;

	i = 0;
	len = ft_strlen(s1) + 1;
	strsave = malloc(sizeof(*s1) * len);
	if (!strsave)
		return (NULL);
	while (s1[i])
	{
		strsave[i] = s1[i];
		i++;
	}
	strsave[i] = '\0';
	return (strsave);
}
