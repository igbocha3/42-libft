/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:35:08 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/08 11:23:46 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Выделяет с помощью 'malloc(3)' и возвращает подстроку из строки 's'.
// Подстрока начинается с индекса 'start' и имеет максимальный размер 'len'.

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		len = 0;
	else if (len > ft_strlen(&str[start]))
		len = ft_strlen(&str[start]);
	ptr = (char *)malloc(sizeof (*ptr) * len + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = str[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
