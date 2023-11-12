/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:56:06 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/11 20:14:14 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	len_n(int nb)
{
	int	l;

	l = 0;
	if (nb <= 0)
		l++;
	while (nb)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

static char	*zero(char *r)
{
	r[0] = '0';
	return (r);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		len;
	long	nbr;

	nbr = (long)n;
	len = len_n(nbr);
	r = malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	r[len] = '\0';
	if (nbr == 0)
		return (zero(r));
	else if (nbr < 0)
	{
		r[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		r[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (r);
}
