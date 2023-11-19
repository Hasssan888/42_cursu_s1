/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:04:30 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:40:33 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	l;
	int	i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s1 += i;
	l = ft_strlen((char *)s1) - 1;
	while (l > 0 && ft_strchr(set, s1[l]))
		l--;
	s1 = ft_substr(s1, 0, l + 1);
	return ((char *)s1);
}
