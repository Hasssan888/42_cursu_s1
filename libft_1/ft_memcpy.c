/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:08:40 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 22:22:21 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	d = (char *)dest;
	s = (char *)src;
	while (n--)
	{
		*d = *s;
		s++;
		d++;
	}
	return (dest);
}
