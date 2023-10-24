/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:21:05 by robernar          #+#    #+#             */
/*   Updated: 2023/10/24 07:01:43 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	dst_length;
	t_size	length_to_add;
	t_size	total_size;

	dst_length = ft_strlen(dst);
	length_to_add = ft_strlen(src);
	total_size = dst_length + length_to_add;
	if (dst_length >= size)
		return (length_to_add + size);
	dst += dst_length;
	size -= dst_length;
	if (length_to_add >= size)
		length_to_add = size - 1;
	ft_memcpy(dst, (void *)src, length_to_add);
	dst[length_to_add] = '\0';
	return (total_size);
}
