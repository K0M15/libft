/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:04:57 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 07:04:39 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static unsigned long count_starts(const char *s, char c)
{
	unsigned long count;
	unsigned long result;

	count = 0;
	result = 0;
	while (s[count] && s[count + 1])
	{
		if (s[count] == c && s[count+1] != c && s[count+1])
			result++;
	}
	return (result);
}

static char	*get_current(const char *s, char c)
{
	char			*result;
	unsigned int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	result = calloc(count + 1, 1);
	ft_strlcpy(result, s, count);
	return (result);
}

static const char	*get_next(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	while (s[count] && s[count] == c)
		count++;
	return (&s[count]);
}

char	**ft_split(const char *s, char c)
{
	unsigned long	elements;
	unsigned long	count;
	char			**result;

	elements = count_starts(s, c);
	result = calloc(elements, sizeof(char *));
	count = 0;
	while (count < elements)
	{
		result[count] = get_current(s, c);
		s = get_next(s, c);
		count++;
	}
	return (result);
}