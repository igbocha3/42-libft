/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:23:22 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/08 11:03:50 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Выполняет поиск первого вхождения символа 'c' в строку 'str' с обратного
// конца и возвращает указатель на него. Обратная версия 'strchr()'.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	const char	ch = c;

	str = (char *)s + ft_strlen(s);
	while (*str != ch)
	{
		if (str == s)
		{
			return (NULL);
		}
		str--;
	}
	return (str);
}