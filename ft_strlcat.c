/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:02 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:56:34 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dsize)
{
	unsigned long	src_ctr;
	unsigned long	dst_ctr;

	src_ctr = 0;
	dst_ctr = ft_strlen(dst);
	while (dst_ctr < dsize && src[src_ctr])
	{
		dst[dst_ctr] = src[src_ctr];
		dst_ctr++;
		src_ctr++;
	}
	dst[dst_ctr] = 0;
	return (dsize);
}
