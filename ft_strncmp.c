/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 17:17:33 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/09 18:16:43 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2  == NULL || n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if ((!s1[i] && !s2[i]) || (i >= n))
			return(0);
		++i;
	}
	return (s1[i] - s2[i]);
}
