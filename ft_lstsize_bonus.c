/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:30:24 by afelger           #+#    #+#             */
/*   Updated: 2024/10/17 13:28:19 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*elm;

	counter = 0;
	elm = lst;
	while (elm)
	{
		counter++;
		elm = elm->next;
	}
	return (counter);
}
