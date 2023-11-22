/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:46:43 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/21 23:41:24 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	r;
	int					i;
	int					s;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] - '0');
		if (r >= 9223372036854775807 && s == 1)
			return (-1);
		else if (r > 9223372036854775807 && s == -1)
			return (0);
		i++;
	}
	return ((int)r * s);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d    **  %d\n",ft_atoi("92233720368547758075"), atoi("2147483648"));
}*/
