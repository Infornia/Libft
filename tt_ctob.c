/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_ctob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:52:54 by mwilk             #+#    #+#             */
/*   Updated: 2016/03/21 18:32:48 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*tt_ctob(int c)
{
	unsigned char	*r;
	int     i;

	r = malloc(8);
	ft_bzero(r, 8);
	i = -1;
	while (++i < 8)
		r[i] = ((c >> i) & 1) + 48;
	return (r);
}
