/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:43:19 by robernar          #+#    #+#             */
/*   Updated: 2023/10/30 22:59:34 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*trimmed;
	
	trimmed = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!trimmed)
		return ((void *)0);
	s = (char *)s1;
	while (ft_strchr(set, *s))
		s++;
	return (ft_strsubs(s1, s - s1, 20);
}

#include <stdio.h>
int main()
{
	printf("%s", "abrodrigoab", "ab");
}
