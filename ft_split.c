/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:33:59 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/03 08:36:02 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Выделяет с помощью 'malloc(3)' и возвращает массив строк, полученных путем
// разбиения 's' с использованием символа 'c' в качестве разделителя.  Массив
// должен завершаться указателем 'NULL'.

#include "libft.h"

static	int	ft_words_counter(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			words++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (words);
}

static char	*ft_putword(char *word, char const *s, int i, int wrdlen)
{
	int	j;

	j = 0;
	while (wrdlen > 0)
	{
		word[j] = s[i - wrdlen];
		j++;
		wrdlen--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int words)
{
	int	i;
	int	word;
	int	wrdlen;

	i = 0;
	word = 0;
	wrdlen = 0;
	while (word < words)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			wrdlen++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (wrdlen + 1));
		if (!s2)
			return (NULL);
		ft_putword(s2[word], s, i, wrdlen);
		wrdlen = 0;
		word++;
	}
	s2[word] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	int		words;

	if (!s)
		return (NULL);
	words = ft_words_counter(s, c);
	s2 = (char **)malloc(sizeof(char *) * (words + 1));
	if (!s2)
		return (NULL);
	ft_split_words(s, c, s2, words);
	return (s2);
}
