/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:08:08 by robernar          #+#    #+#             */
/*   Updated: 2023/10/24 07:26:56 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

typedef int	t_size;
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *s, int c, t_size n);
void	*ft_memcpy(void *dest, void *src, t_size n);
void	*ft_memmove(void *dest, void *src, t_size n);
void	ft_bzero(void *s, t_size n);
t_size		ft_strlen(const char *s);
t_size		ft_strlcpy(char *dst, const char *src, t_size size);
t_size		ft_strlcat(char *dst, const char *src, t_size size);
#endif
