/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:30:36 by afelger           #+#    #+#             */
/*   Updated: 2024/10/16 14:48:31 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*result;

	if (len == 0 || start + len > ft_strlen(s))
		return (ft_calloc(1, 1));
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s[start], len + 1);
	result[len] = 0;
	return (result);
}
