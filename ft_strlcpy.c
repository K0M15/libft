/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:19:10 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 16:55:05 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dsize)
{
	unsigned long	counter;

	counter = 0;
	while (counter + 1 < dsize && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dsize != 0)
		dst[counter] = 0;
	return (counter);
}
