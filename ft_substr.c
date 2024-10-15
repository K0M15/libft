/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:30:36 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:33:49 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*result;

	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s[start], len);
	result[len] = 0;
	return (result);
}
