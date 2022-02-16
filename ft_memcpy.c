/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:42:19 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 23:02:11 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Копирует 'n' символов из массива, на который указывает 'src', в
// массив, на который указывает 'dst'. Если массивы перекрываются, поведение
// 'memcpy()' не определено. Функция 'memcpy()' возвращает указатель на 'dst'.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*tmp_src;
	char		*tmp_dst;

	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		tmp_dst++;
		tmp_src++;
		n--;
	}
	return (dst);
}
