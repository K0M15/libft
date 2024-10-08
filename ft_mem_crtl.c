/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_crtl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:17:29 by afelger           #+#    #+#             */
/*   Updated: 2024/10/08 17:39:30 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, unsigned long n)
{
	unsigned int	counter;

	counter = 0;
	while (((char *)s)[counter] != (char)c && counter < n)
		counter++;
	return ((void *)&s[counter]);
}

int	memcmp(const void *s1, const void *s2, unsigned long n)
{
	return (strncmp((const char *)s1, (const char *)s2, n));
}

void	*memset(void *s, int c, unsigned long n)
{
	while (--n + 1)
	{
		((char *)s)[n] = (char) c;
	}
	return (s);
}

void	*memcpy(void *dest, const void *src, unsigned long n)
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

void	*memmove(void *dest, const void *src, unsigned long n)
{
	while (--n + 1)
	{
		((char *)dest)[n] = ((char *)src)[n];
	}
	return (dest);
}
