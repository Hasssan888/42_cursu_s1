/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:37:30 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/13 17:35:49 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t size_elem)
{
	size_t	total_size;
	void	*ptr;

	if (size_elem && num_elem > (UINT_MAX / size_elem))
		return (NULL);
	total_size = num_elem * size_elem;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}

/*#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main() {
	//printf("%s\n",ft_calloc(7 ,(size_t) (-7)));
	printf("%s\n", ft_calloc(INT_MAX, INT_MAX));
}*/
