/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:13:01 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:40:27 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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

	divisor = get_divisor(n);
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
