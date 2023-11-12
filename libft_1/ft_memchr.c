/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:41:47 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/03 13:01:42 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *p, int v, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(const unsigned char *)p) == (unsigned char)v)
			return ((void *)(p));
		p++;
		i++;
	}
	return (NULL);
}
