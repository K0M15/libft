/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_crtl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:17:29 by afelger           #+#    #+#             */
/*   Updated: 2024/10/09 16:52:35 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned int	counter;

	counter = 0;
	while (((char *)s)[counter] != (char)c && counter < n)
		counter++;
	return ((void *)&s[counter]);
}

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	return (ft_strncmp((const char *)s1, (const char *)s2, n));
}

void	*ft_memset(void *s, int c, unsigned long n)
{
	while (--n + 1)
	{
		((char *)s)[n] = (char) c;
	}
	return (s);
}

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		((char *)dest)[counter] = ((char *)src)[counter];
		counter++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	while (--n + 1)
	{
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}
