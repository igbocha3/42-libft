/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:44:58 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 23:09:35 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Находит первое вхождение 'needle' строки с нулевым окончанием в строке
// 'haystack'. Перебирается не более 'len' символов, поиск прекращается после
// символа `\0'. Если 'needle' - пустая строка, возвращается 'haystack'. Если
// 'needle' нигде не встречается в 'haystack', возвращается 'NULL'. В противном
// случае возвращается указатель на первый символ первого вхождения 'needle'.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack [i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
