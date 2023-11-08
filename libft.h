/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:08:08 by robernar          #+#    #+#             */
/*   Updated: 2023/11/08 09:24:56 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef long	t_size;
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, t_size n);
int		ft_memcmp(const void *s1, const void *s2, t_size n);
int		ft_atoi(const char *nptr);
void	*ft_memset(void *s, int c, t_size n);
void	*ft_memcpy(void *dest, void *src, t_size n);
void	*ft_memmove(void *dest, void *src, t_size n);
void	*ft_memchr(const void *s, int c, t_size n);
void	ft_bzero(void *s, t_size n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	*ft_calloc(t_size nmemb, t_size size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, t_size len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, t_size len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
t_size	ft_strlen(const char *s);
t_size	ft_strlcpy(char *dst, const char *src, t_size size);
t_size	ft_strlcat(char *dst, const char *src, t_size size);
#endif
