/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:41:47 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:44:05 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *p, int v, size_t n)
{
	while (n)
	{
		if (*((unsigned char *)p) == (unsigned char)v)
			return ((void *)p);
		p++;
		n--;
	}
	return (0);
}
