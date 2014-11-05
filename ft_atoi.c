/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 21:28:33 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/05 22:29:58 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(const char *str)
{
	char	*cur;
	int		sign;
	int		result;

	cur = (char *)str;
	while (*cur == ' ')
		cur++;
	sign = (*cur == '-' ) ? -1 : 1;
	cur = (*cur == '-' || *cur == '+') ? cur + 1 : cur;
	while (*cur >= '0' && *cur <= 9)
	{

		result = result * 10 + *cur - 48;
		cur++;
	}
	result *= sign;
	return (result);
}
