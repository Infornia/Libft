/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:51:33 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/05 23:29:47 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strncat(char *s1, const char *s2, size_t n)
{
	char		*dst;
	const char	*src;
	int			i;
	int			j;

	dst = (char *)s1;
	src = (const char *)s2;
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (!dst[i] && src[j] && j <= n)
		while (src[j] && j <= n)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	return (dst);
}
