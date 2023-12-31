/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:48:41 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:20:23 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	else
	{
		current = *lst;
		if (current == NULL)
		{
			*lst = new;
			return ;
		}
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
