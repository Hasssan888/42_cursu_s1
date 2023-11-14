/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:10:37 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/13 22:53:09 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst || size == 0)
		return (len_src + size);
	j = len_dst;
	while (src[i] != '\0' && i < size - len_dst - 1)
	{
		((char *)dst)[j] = ((char *)src)[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_dst + len_src);
}
