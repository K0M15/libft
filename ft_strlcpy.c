/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:19:10 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:19:13 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dsize)
{
	unsigned long	counter;

	counter = 0;
	while (counter < dsize && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	return (dsize);
}
