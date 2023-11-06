/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:13:39 by robernar          #+#    #+#             */
/*   Updated: 2023/11/05 21:02:47 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_create_str_from_char(char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

static int	ft_count_words(char *s, char c)
{
	int	counter;

	counter = 0;
	if (*s == '\0')
		return (counter);
	s[ft_strlen(s)] = c;
	s[ft_strlen(s)] = '\0';
	while (*s)
	{
		if (*s == c)
		{
			counter++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	*cpy_s;
	char	*char_set;
	char	**words;
	int		n_words;
	int		i;

	i = 0;
	char_set = ft_create_str_from_char(c);
	cpy_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 2));
	cpy_s = ft_strtrim(s, char_set);
	n_words = ft_count_words(cpy_s, c);
	words = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!words || n_words == 0)
	{
		*words = ((void *)0);
		return (words);
	}
	while (*cpy_s)
	{
		words[i++] = ft_substr(cpy_s, 0, ft_strchr(cpy_s, c) - cpy_s);
		cpy_s = ft_strchr(cpy_s, c) + 1;
	}
	words[i] = ((void *)0);
	return (words);
}
