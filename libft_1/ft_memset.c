/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:37:46 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/03 19:09:53 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *p, int v, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)p;
	while (n--)
	{
		*d = (unsigned char)v;
		d++;
	}
	return (d);
}	
