/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:32:15 by halramli          #+#    #+#             */
/*   Updated: 2023/01/13 16:33:47 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjo;
	size_t	lens1;
	size_t	lens2;

	if (!s1 && s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	strjo = malloc (sizeof(*strjo) * (lens1 + lens2 + 1));
	if (!strjo)
		return (NULL);
	ft_memmove(strjo, s1, lens1);
	ft_memmove((strjo + lens1), s2, lens2);
	strjo[lens1 + lens2] = '\0';
	return (strjo);
}
