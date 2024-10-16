/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:53:25 by afelger           #+#    #+#             */
/*   Updated: 2024/10/16 15:13:05 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int	charinset(char c, const char *set)
{
	unsigned long	scount;

	scount = 0;
	while (set[scount])
	{
		if (c == set[scount])
			return (1);
		scount++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	start;
	unsigned long	end;

	start = 0;
	end = ft_strlen(s1)-1;
	while (charinset(s1[start], set))
		start++;
	while (charinset(s1[end], set) && end > start)
		end--;
	if (start == end)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, start, end - start + 1));
}
