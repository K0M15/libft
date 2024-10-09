/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:53:25 by afelger           #+#    #+#             */
/*   Updated: 2024/10/09 15:05:55 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int charinset(char c, char *set)
{
	unsigned long scount;

	scount = 0;
	while(set[scount])
		if(c == set[scount])
			return (1);
	return (0);
}

/**
 * abcdefghij
 * 0123456789
 * 
 * 
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	start;
	unsigned long	end;
	char			*result;

	start = 0;
	end = ft_strlen(s1)-1;
	while (s1[start] && charinset(s1[start], set))
		start++;
	while (s1[end] && charinset(s1[end], set))
		end--;
	result = malloc(end - start + 2);
	ft_strlcpy(result, &s1[start], end - start + 1);
	result[end-start+1] = 0;
	return result;	
}
