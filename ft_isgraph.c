/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:18:47 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/05 14:20:05 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isgraph(int c)
{
	if (ft_isprint(c) && c != ' ')
		return (1);
	return (0);
}