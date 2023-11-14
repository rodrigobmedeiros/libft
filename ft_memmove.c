/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 05:06:36 by robernar          #+#    #+#             */
/*   Updated: 2023/11/09 17:40:07 by robernar         ###   ########.rj       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_cpy_char_down(unsigned char *d, unsigned char *s, t_size i)
{
	d[i] = s[i];
	return (--i);
}

int	ft_cpy_char_up(unsigned char *d, unsigned char *s, t_size i)
{
	d[i] = s[i];
	return (++i);
}

void	*ft_memmove(void *dest, void *src, t_size n)
{
	unsigned char	*d;
	unsigned char	*s;
	t_size			i;

	i = 0;
	d = dest;
	s = src;
	if (!d && !s)
		return (dest);
	if (s < d)
	{
		i = n - 1;
		while (i >= 0)
			i = ft_cpy_char_down(d, s, i);
	}
	else
	{
		while (i < n)
		{
			i = ft_cpy_char_up(d, s, i);
		}
	}
	return (dest);
}
