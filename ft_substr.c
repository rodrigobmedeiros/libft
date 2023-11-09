/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:06:54 by robernar          #+#    #+#             */
/*   Updated: 2023/11/09 18:39:47 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char	*substr;	
	t_size	i;
	t_size	s_len;

	s_len = ft_strlen(s);
	i = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[start] && i < len && start <= s_len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
