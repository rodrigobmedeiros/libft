/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:02:20 by robernar          #+#    #+#             */
/*   Updated: 2023/11/01 06:36:32 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_strrev(char *str)
{
	int	half;
	int	size;
	int	i;
	int	temp;

	i = 0;
	size = ft_strlen(str);
	half = size / 2;
	while (i < half)
	{
		temp = str[i];
		str[i] = str[size - i -1];
		str[size - i - 1] = temp;
		i++;
	}
}

static char	char_from_int(int nbr)
{
	return (nbr + 48);
}

char	*ft_itoa(int n)
{
	int		signal;
	int		i_num;
	char	*num;

	num = (char *)malloc(sizeof(char) * 12);
	if (!num)
		return ((void *)0);
	signal = 1;
	i_num = 0;
	if (n < 0)
	{
		*num++ = '-';
		signal = -1;
	}
	while (n / 10 != 0)
	{
		num[i_num++] = char_from_int(signal * (n % 10));
		n = n / 10;
	}
	num[i_num++] = char_from_int(signal * (n % 10));
	num[i_num] = '\0';
	ft_strrev(num);
	if (signal < 0)
		num--;
	return (num);
}