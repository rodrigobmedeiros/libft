/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:18:19 by robernar          #+#    #+#             */
/*   Updated: 2023/11/09 16:16:15 by robernar         ###   ########.rj       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, void *src, t_size n)
{
	unsigned char	*d;
	unsigned char	*s;
	t_size			i;

	d = dest;
	s = src;
	i = 0;
	if (!d && !s)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
