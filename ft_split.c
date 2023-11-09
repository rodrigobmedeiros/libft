/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:13:39 by robernar          #+#    #+#             */
/*   Updated: 2023/11/09 19:07:43 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *s, char c)
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
	if (*--s != c)
		counter++;
	return (counter);
}

static char	*ft_move_pointer_to_next_non_delimiter(char const *s, char c)
{
	char	*cpy_s;

	cpy_s = (char *)s;
	while (*cpy_s == c && cpy_s - s < ft_strlen(s))
		cpy_s++;
	return (cpy_s);
}

static char	*ft_add_delimiter_to_end(char const *s, char c)
{
	char	*cpy_s;
	int		len;

	len = ft_strlen(s);
	cpy_s = (char *)malloc(sizeof(char) * (len + 2));
	ft_strlcpy(cpy_s, s, len + 1);
	cpy_s[len] = c;
	cpy_s[len + 1] = '\0';
	return (cpy_s);
}

char	**ft_split(char const *s, char c)
{
	char	*cpy_s;
	char	*start;
	char	**words;
	int		n_words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	cpy_s = ft_add_delimiter_to_end(s, c);
	start = cpy_s;
	cpy_s = ft_move_pointer_to_next_non_delimiter(cpy_s, c);
	n_words = ft_count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!words)
		return (NULL);
	while (*cpy_s)
	{
		words[i++] = ft_substr(cpy_s, 0, ft_strchr(cpy_s, c) - cpy_s);
		cpy_s = ft_strchr(cpy_s, c) + 1;
		cpy_s = ft_move_pointer_to_next_non_delimiter(cpy_s, c);
	}
	words[i] = NULL;
	free(start);
	return (words);
}
