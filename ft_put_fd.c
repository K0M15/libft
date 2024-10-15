/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:13:01 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 08:37:08 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	unsigned long	c;

	c = ft_strlen(s);
	write(fd, s, c);
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(1, "\n", 1);
}

static long	get_divisor(int n)
{
	long	div;

	div = 10000000000;
	while (n / div == 0)
		div /= 10;
	return (div);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	divisor;
	char	result;
	// int		position;

	divisor = get_divisor(n);
	// position = 0;
	if (n > 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	while (divisor != 0)
	{
		result = n / divisor + '0';
		ft_putchar_fd(result, fd);
		divisor /= 10;
	}
}
