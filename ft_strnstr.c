/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:55:47 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/09 18:15:15 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL || n == 0 || n < len)
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	if (n > len)
		len = n;
	while (s1[i])
	{
		if (!ft_strncmp(s1 + i, s2, len))
			return ((char *) s1 + i);
	}
	return (NULL);
}
