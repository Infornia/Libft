/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:23:56 by mwilk             #+#    #+#             */
/*   Updated: 2016/05/09 15:43:00 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*d;
	const char		*s = (const char *)src;

	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
