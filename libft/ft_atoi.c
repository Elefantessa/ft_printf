/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:16:45 by halramli          #+#    #+#             */
/*   Updated: 2023/01/13 13:16:54 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	checkneg(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		is_neg;
	long	res;
	long	temp;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	is_neg = checkneg (str[i]);
	if (is_neg == -1 || str[i] == '+')
		i++;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = res;
		res = res * 10;
		if (res < temp && is_neg == 1)
			return (-1);
		if (res < temp && is_neg == -1)
			return (0);
		res = res + (str[i] - '0');
		i++;
	}
	return (res * is_neg);
}

/* 
#include <stdio.h>
#include <stdlib.h>

int    main(void)
{
	printf("%i original atoi\n", atoi("9223372036854775805"));
	printf("%i  ft atoi\n\n\n", ft_atoi("9223372036854775805"));
	return (0);
} */
