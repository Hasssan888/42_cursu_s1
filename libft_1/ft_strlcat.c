/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:10:37 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:41:21 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	a;
	size_t	b;

	a = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d || size == 0)
		return (len_s + size);
	b = len_d;
	while (src[a] != '\0' && a < size - len_d - 1)
	{
		((char *)dest)[b] = ((char *)src)[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (len_d + len_s);
}
