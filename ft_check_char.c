/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:43:30 by afelger           #+#    #+#             */
/*   Updated: 2024/10/07 17:45:45 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalpha(int c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	if(c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

int	isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}

int	isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return 1;
	return 0;
}

int isalpha(int c)
{
    if(c >= 0 && c <= 127)
        return 1;
    return 0;
}

int	isprint(int c)
{
	if(c >= 32 && c <= 126)
		return 1;
	return 0;
}
