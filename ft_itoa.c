/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:20:10 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 22:59:09 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Конвертирует целое число 'n' в строчный эквивалент и помещает результат в
// строку, на которую указывает параметр 'str'. Отрицательные значения тоже
// долдны быть обработаны.

#include "libft.h"

int	ft_nbrlen(int nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
	{
		return (1);
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nbrlen(n);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
