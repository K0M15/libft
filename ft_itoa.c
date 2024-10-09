/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:06:23 by afelger           #+#    #+#             */
/*   Updated: 2024/10/09 16:30:03 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_divisor(int n)
{
	long div;
	
	div = 10000000000;
	while(n/div == 0)
		div /= 10;
	return div;
}

char	*ft_itoa(int n)
{
	long	divisor;
	char	*result;
	int		position;

	divisor = get_divisor(n);
	position = 0;
	result = ft_calloc(12, 1);
	if(result == 0)
		return 0;
	if (n > 0)
	{
		n *= -1;
		result[position++] = '-';
	}
	while (divisor != 0)
	{
		result[position] = n/divisor + '0';
		divisor /= 10;
		position++;
	}
	return result;
}
