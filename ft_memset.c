/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:05:01 by robernar          #+#    #+#             */
/*   Updated: 2023/10/26 08:16:14 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, t_size n)
{
	unsigned char	*arr;
	t_size			i;

	arr = s;
	i = 0;
	while (i < n)
		arr[i++] = c;
	return (s);
}
