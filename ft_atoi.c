/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:28:52 by afelger           #+#    #+#             */
/*   Updated: 2024/10/09 15:53:28 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int isSpace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return 1;
	return 0;
}

int	ft_atoi(const char *str)
{
	long counter;
	char sign;
	long result;

	counter = 0;
	sign = 1;
	result = 0;
	while(isSpace(str[counter]))
		counter++;
	if(str[counter++] == '-')
		sign *= -1;
	while(ft_isdigit(str[counter]))
	{
		result *= 10;
		result += str[counter] - '0';
		counter++;
	}
	return result;
}
