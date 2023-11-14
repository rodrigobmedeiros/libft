/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 06:22:02 by robernar          #+#    #+#             */
/*   Updated: 2023/10/26 09:07:28 by robernar         ###   ########.rj       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size size)
{
	t_size	i;
	t_size	src_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}
