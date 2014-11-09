/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 17:52:05 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/09 18:11:06 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	if (s2[i] == '\0')
		return (NULL);
	j = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (!s1[i] && !s2[i])
				return (char *) (&(s1[i]));
			if (s1[i + j])
				return (NULL);
			j++;
		}

		i++;
	}
	return (NULL);
}
