/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:45:52 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 23:06:09 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Добавляет строку 'src' в конец строки 'dst'.  Будет добавлено не более
// 'dstsize - strlen(dst) - 1' символов.  Затем она завершается терминальным
// символом, если только 'dstsize' не равен '0' или исходная строка 'dst' не
// была длиннее 'dstsize'. Если строки 'src' и 'dst' пересекаются, поведение
// не определено. Возвращает суммарную длину строк по адресам 'src' и 'dst'.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	if (dstsize > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + 1 + i < dstsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
