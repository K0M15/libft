/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelger <afelger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:42:38 by afelger           #+#    #+#             */
/*   Updated: 2024/10/18 17:16:19 by afelger          ###   ########.fr       */
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
		del(elem->content);
		elem = elem->next;
		free(buff);
	}
	*lst = NULL;
}
