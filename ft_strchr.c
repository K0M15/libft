/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:14:16 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:14:49 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
