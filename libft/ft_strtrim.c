/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:43:19 by robernar          #+#    #+#             */
/*   Updated: 2023/10/31 07:17:15 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*s_end;
	char	*trimmed;

	trimmed = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!trimmed)
		return ((void *)0);
	s = (char *)s1;
	s_end = (char *)(s1 + ft_strlen(s1));
	while (ft_strchr(set, *s))
		s++;
	while (ft_strrchr(set, *s_end))
		s_end--;
	return (ft_substr(s1, s - s1, s_end - s + 1));
}
