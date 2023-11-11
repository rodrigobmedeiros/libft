/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:13:39 by robernar          #+#    #+#             */
/*   Updated: 2023/11/11 12:00:13 by robernar         ###   ########.fr       */
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

static char	*ft_allocate_word(char **words, char *cpy_s, int i, char c)
{
	char	*substr;

	substr = ft_substr(cpy_s, 0, ft_strchr(cpy_s, c) - cpy_s);
	if (!substr)
	{
		while (i > 0)
			free(words[--i]);
		return (NULL);
	}
	words[i] = substr;
	cpy_s = ft_strchr(cpy_s, c) + 1;
	cpy_s = ft_move_pointer_to_next_non_delimiter(cpy_s, c);
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
		cpy_s = ft_allocate_word(words, cpy_s, i++, c);
		if (!cpy_s)
			return (NULL);
	}
	words[i] = NULL;
	free(start);
	return (words);
}

/*#include <stdio.h>
int main()
{
	char	*s = "      split       this for   me  !       ";
	char	**result = ft_split(s, ' ');
	if (!result)
	{
		printf("Retornou nulo entao ta certo");
		return (0);
	}
	printf("%s\n", result[0]);
	free(result[0]);
	printf("%s\n", result[1]);
	free(result[1]);
	printf("%s\n", result[2]);
	free(result[2]);
	printf("%s\n", result[3]);
	free(result[3]);
	printf("%s\n", result[4]);
	free(result[4]);
	free(result);
	printf("Passou no teste mas nao deveria\n");
	return (0);
}*/
