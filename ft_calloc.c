/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 07:54:30 by robernar          #+#    #+#             */
/*   Updated: 2023/11/09 18:08:43 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(t_size nmemb, t_size size)
{
	int	total_size;
	void	*allocated;

	total_size = (int)nmemb * (int)size;
	if (total_size / size != nmemb)
		return (NULL);
	allocated = (void *)malloc(total_size);
	if (!allocated)
		return (NULL);
	return (ft_memset(allocated, '\0', total_size));
}
