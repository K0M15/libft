/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:55:39 by afelger           #+#    #+#             */
/*   Updated: 2024/10/10 08:17:38 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned long	count;

	result = ft_calloc(ft_strlen(s), 1);
	count = 0;
	while(s[count])
	{
		result[count] = f(count, s[count]);
		count++;
	}
	return result;
}
