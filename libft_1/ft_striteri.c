/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:13:43 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 16:06:09 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}
/*
#include <stdio.h>
void ft_print_index(unsigned int index, char *c)
{
    printf("Index: %u, Character: %c\n", index, *c);
    // Example: Print the index and character
    // You can modify this function according to your requirements
}
int main()
{
    char input[] = "Hello, world!";

    printf("Input: %s\n", input);
    ft_striteri(input, ft_print_index);
    return 0;
}*/