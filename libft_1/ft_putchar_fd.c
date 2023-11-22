/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:21:24 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/19 22:28:37 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*#include <fcntl.h>
int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd < 0)
    {
        // Error opening file
        return 1;
    }

    char c = 'A';
    ft_putchar_fd(c, fd);

    close(fd);

    return 0;
}*/
