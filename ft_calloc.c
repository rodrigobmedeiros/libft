/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 07:54:30 by robernar          #+#    #+#             */
/*   Updated: 2023/10/26 08:38:44 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(t_size nmemb, t_size size)
{
	int	total_size;

	total_size = (int)nmemb * (int)size;
	if (nmemb == 0 || size == 0 || total_size / size != nmemb)
		return ((void *)0);
	return (ft_memset(malloc(total_size), '\0', total_size));
}
