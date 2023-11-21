/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:35:48 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 18:39:02 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*current;

	if (lst == NULL)
		return (0);
	size = 0;
	current = lst;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
