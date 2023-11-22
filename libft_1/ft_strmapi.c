/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:28:08 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:40:11 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
/*

char trf_case(unsigned int index, char c)
{
    return c - index;
}
int main()
{
    const char *input = "Hello, world!";
    char *output = ft_strmapi(input, index_case);
    if (output != NULL)
    {
        printf("Input: %s\n", input);
        printf("Output: %s\n", output);
        free(output);
    }
    return 0;
}*/