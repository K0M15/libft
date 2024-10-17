/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:06:23 by afelger           #+#    #+#             */
/*   Updated: 2024/10/17 14:25:09 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_divisor(int n)
{
	long	div;

	div = 10000000000;
	while (n / div == 0)
		div /= 10;
	return (div);
}

static int	handle_zero(int n, char *result)
{
	if (n == 0)
	{
		result[0] = '0';
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	long	divisor;
	char	*result;
	int		position;
	long	data;

	position = 0;
	data = n;
	result = ft_calloc(12, 1);
	if (handle_zero(n, result) || !result)
		return (result);
	if (data < 0)
	{
		data *= -1;
		result[position++] = '-';
	}
	divisor = get_divisor(data);
	while (divisor != 0)
	{
		result[position] = data / divisor + '0';
		data = data - data / divisor * divisor;
		divisor /= 10;
		position++;
	}
	return (result);
}
