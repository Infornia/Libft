/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:22:41 by mwilk             #+#    #+#             */
/*   Updated: 2016/05/09 16:40:24 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*str;
	size_t			size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = (size_t)ft_strlen(s1) + (size_t)ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	str[size] = '\0';
	return (str);
}
