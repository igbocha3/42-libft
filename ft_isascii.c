/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:13:50 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 22:58:02 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Возвращает ненулевое значение если значение 'c' находится в
// пределах от '0' до '0x7F', в противном случае возвращается '0'.

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
