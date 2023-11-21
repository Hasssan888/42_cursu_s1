/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:02:34 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 22:47:01 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **s, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	count_w(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static char	*alloc_w(char *str, char c)
{
	int		len_w;
	int		i;
	char	*ptr;

	len_w = 0;
	while (str[len_w] && str[len_w] != c)
		len_w++;
	ptr = (char *)malloc(sizeof(char) * (len_w + 1));
	if (ptr != NULL)
	{
		i = 0;
		while (i < len_w)
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}	

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		word;
	int		i;

	word = count_w((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (word + 1));
	if (strs != NULL)
	{
		i = 0;
		while (*s)
		{
			if (*s != c)
			{
				strs[i] = alloc_w((char *)s, c);
				if (strs[i] == NULL)
					return(ft_free(strs, i));
				i++;
				while (*s && *s != c)
					s++;
			}
			else
				s++;
		}
		strs[i] = NULL;
	}
	return (strs);
}
