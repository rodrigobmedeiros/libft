/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:13:39 by robernar          #+#    #+#             */
/*   Updated: 2023/11/05 18:48:30 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

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
	if (!*s)
		return (counter);
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
	int	n_words;

	char_set = ft_create_str_from_char(c);
	words = (char **)malloc(sizeof(char *) * 1);
	if (!words)
	{
		*words = ((void *)0);
		return words;
	}
	cpy_s = (char	*)malloc(sizeof(char) * (ft_strlen(s) + 2));
	cpy_s = ft_strtrim(s, char_set);
	cpy_s[ft_strlen(cpy_s)] = c;
	cpy_s[ft_strlen(cpy_s)] = '\0';
	n_words = ft_count_words(cpy_s, c);
	printf("%s\n", cpy_s);
	printf("%d\n", n_words);
	return (words);
}

int main()
{
	ft_split(",,,,rodrigo,bernardo,medeiros,,,,,", ',');
}
