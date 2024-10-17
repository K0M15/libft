/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:42:38 by afelger           #+#    #+#             */
/*   Updated: 2024/10/17 13:27:20 by afelger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*buff;

	elem = *lst;
	while (elem)
	{
		buff = elem;
		elem = elem->next;
		del(buff->content);
		free(buff);
	}
	*lst = NULL;
}
