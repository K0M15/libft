/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_crtl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:22:08 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 09:01:14 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *c)
{
	unsigned long	counter;

	counter = 0;
	while (c[counter])
		counter++;
	return (counter);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned long	counter;

	counter = 0;
	while (s[counter])
	{
		if ((char) c == s[counter])
			return ((char *)&s[counter]);
		counter++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	counter;

	counter = ft_strlen(s);
	while (counter > 0)
	{
		if (c == s[counter - 1])
			return ((char *)&s[counter - 1]);
		counter--;
	}
	return (0);
}

unsigned long	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	counter;

	counter = 0;
	while (counter < n && s1[counter] - s2[counter] == 0 && s1[counter])
		counter++;
	return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned long n)
{
	unsigned long	c_haystack;
	unsigned long	c_needle;
	unsigned long	needle_length;

	needle_length = ft_strlen(needle);
	c_haystack = 0;
	while (haystack[c_haystack] && c_haystack < n)
	{
		c_needle = 0;
		while (needle[c_needle]
			&& haystack[c_haystack + c_needle] == needle[c_needle])
			c_needle++;
		if (c_needle == needle_length)
			return ((char *)&haystack[c_haystack]);
		c_haystack++;
	}
	return (0);
}
