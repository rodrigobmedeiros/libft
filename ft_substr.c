/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:06:54 by robernar          #+#    #+#             */
/*   Updated: 2023/10/28 06:40:51 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char	*substr;
	t_size	s_len;	
	t_size	i;

	i = 0;
	s_len = ft_strlen(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return ((void *)0);
	while (start < (unsigned int)s_len && i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
