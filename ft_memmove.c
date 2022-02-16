/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:43:51 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/08 11:03:40 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Копирует 'len' символов из массива, на который указывает
// 'src', в мас­сив, на который указывает 'dst'. Если массивы перекрываются
// копирование производится корректно, причем неискаженное со­держимое
// копируемой части памяти переносится в 'dst', a 'src' становится измененным.
// Функция 'memmove()' возвращает указатель на 'dst'.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*tmp_src;
	char		*tmp_dst;
	size_t		i;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dst > src)
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}
