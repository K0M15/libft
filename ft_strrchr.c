/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:14:17 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 17:09:59 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	counter;

	counter = ft_strlen(s) + 1;
	while (counter > 0)
	{
		if (c == s[counter - 1])
			return ((char *)&s[counter - 1]);
		counter--;
	}
	return (0);
}
