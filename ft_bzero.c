/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:00:27 by robernar          #+#    #+#             */
/*   Updated: 2023/10/20 00:11:06 by robernar         ###   ########.rj       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, t_size n)
{
	unsigned char	*arr;
	t_size			i;

	arr = s;
	i = 0;
	while (i < n)
		arr[i++] = '\0';
	return ;
}
