/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:27:15 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:02:55 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	len_n;
	size_t	i;

	len_n = ft_strlen(n);
	if (!h && l == 0)
		return (NULL);
	if (!(*n))
		return ((char *)h);
	i = 0;
	while (h[i] && i + len_n <= l)
	{
		if (h[i] == n[0] && ft_strncmp(h + i, n, len_n) == 0)
			return ((char *)(h + i));
		i++;
	}
	return (NULL);
}
