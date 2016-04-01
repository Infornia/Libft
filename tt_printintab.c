/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_printintab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 22:53:05 by mwilk             #+#    #+#             */
/*   Updated: 2016/04/01 23:39:19 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	tt_printintab(int **t, int sizej, int sizei)
{
	int		i;
	int		j;

	j = -1;
	while (t && ++j < sizej)
	{
		i = -1;
		while (++i < sizei)
			pnbr(t[j][i]);
		pchar('\n');
	}
}
