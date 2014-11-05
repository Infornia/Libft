/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:27:02 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/05 23:46:17 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dst, const char *src, size_t);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *s1, const char s2, size_t n);
char	*ft_strncpy(char dst, const char src, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
