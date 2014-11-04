/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:09:16 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/04 19:21:59 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;

	*dup = (char*)malloc(sizeof(*s1) * (strlen(s1) + 1));
	if (s1)
	{
		strcpy(s1, dup);
		return (dup);
	}
	else
		return (NULL);
}
