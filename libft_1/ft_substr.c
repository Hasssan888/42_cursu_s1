/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:30:01 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/13 15:10:06 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	len_sub;
	char	*substring;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len < len_s - start)
		len_sub = len;
	else
		len_sub = len_s - start;
	substring = (char *)malloc((len_sub + 1) * sizeof(char));
	if (substring != NULL)
	{
		ft_memcpy(substring, s + start, len_sub);
		substring[len_sub] = '\0';
	}
	return (substring);
}
