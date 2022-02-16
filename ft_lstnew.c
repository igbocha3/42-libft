/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:10:37 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/08 11:03:38 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Выделяет с помощью 'malloc(3)' и возвращает новый элемент. 
// Переменная 'content' инициализируется значением параметра 'content'.
// Переменная 'next' инициализируется значением NULL.

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;

	rtn = (t_list *)malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	rtn->next = NULL;
	rtn->content = content;
	return (rtn);
}
