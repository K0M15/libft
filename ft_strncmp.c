/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:14:18 by afelger           #+#    #+#             */
/*   Updated: 2024/10/15 14:15:01 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	counter;

	counter = 0;
	while (counter < n && s1[counter] - s2[counter] == 0 && s1[counter])
		counter++;
	return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
}
