/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 05:26:13 by robernar          #+#    #+#             */
/*   Updated: 2023/11/09 17:49:50 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, t_size len)
{
	t_size	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)(big));
	if (len == 0)
		return (NULL);
	if (!*big)
		return (NULL);
	while (len > 0 && len-- >= little_len)
	{
		if (!ft_strncmp(big++, little, little_len))
			return ((char *)(big - 1));
	}
	return (NULL);
}
