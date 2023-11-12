/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:10:37 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/03 19:17:22 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest > size)
		len_dest = size;
	if (len_dest == size)
		return (size + len_src);
	if (len_src < size - len_dest)
	{
		ft_memcpy(dest + len_dest, src, len_src);
		dest[len_dest + len_src] = '\0';
	}
	else
	{
		ft_memcpy(dest + len_dest, src, len_src);
		dest[size - 1] = '\0';
	}
	return (len_dest + len_src);
}
