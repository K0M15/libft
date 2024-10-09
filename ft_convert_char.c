/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:15:04 by afelger           #+#    #+#             */
/*   Updated: 2024/10/08 16:17:13 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a')
		return (c - ' ');
	return (c);
}

int	ft_tolower(int c)
{
	if (c <= 'Z')
		return (c + ' ');
	return (c);
}
