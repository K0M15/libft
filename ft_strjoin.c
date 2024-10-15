/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:30:47 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:36:02 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	s1len;
	unsigned int	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = malloc(s1len + s2len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, s1len);
	ft_strlcpy(&result[s1len], s2, s2len + 1);
	return (result);
}
