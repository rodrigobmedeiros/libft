/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 05:06:36 by robernar          #+#    #+#             */
/*   Updated: 2023/11/14 09:47:38 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_cpy_char_down(char *d, char *s, t_size i)
{
	d[i] = s[i];
	return (--i);
}

int	ft_cpy_char_up(char *d, char *s, t_size i)
{
	d[i] = s[i];
	return (++i);
}

void	*ft_memmove(void *dest, void *src, t_size n)
{
	char	*d;
	char	*s;
	t_size			i;

	i = 0;
	d = dest;
	s = src;
	if ((!d && !s) || n == 0)
		return (dest);
	if (s < d)
	{
		i = n - 1;
		while (i > 0)
			i = ft_cpy_char_down(d, s, i);
		d[i] = s[i];
	}
	else
	{
		while (i < n && s[i] && d[i])
		{
			i = ft_cpy_char_up(d, s, i);
		}
	}
	return (dest);
}
