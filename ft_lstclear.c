/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:11:55 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/08 05:45:36 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Удаляет и освобождает данный элемент и каждого преемника этого элемента,
// используя функцию 'del' и 'free(3)'. Наконец, указатель на список должен
// быть установлен в значение 'NULL'.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (*lst != NULL)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		*lst = 0;
	}
}
