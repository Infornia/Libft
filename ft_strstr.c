/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 17:52:05 by mwilk             #+#    #+#             */
/*   Updated: 2016/05/09 16:47:47 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s2[0] == '\0')
		return (s1);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			j++;
			if (!s2[j])
				return (s1 + i);
		}
		i++;
	}
	return (NULL);
}
