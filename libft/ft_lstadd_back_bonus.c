/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halramli <halramli@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:54:07 by halramli          #+#    #+#             */
/*   Updated: 2023/01/18 23:13:43 by halramli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (new)
	{
		lastnode = ft_lstlast(*lst);
		lastnode->next = new;
	}
}
