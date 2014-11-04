/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:05:27 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/04 22:40:52 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	i = 0;
	if (len == 0)
		return (b);
	str = (unsigned char*)b;
	while (len-- > 0)
	{
		*str = (unsigned char)c;
		if (str[i] == '\0')
			break ;
		str++;
	}
	return (b);
}
