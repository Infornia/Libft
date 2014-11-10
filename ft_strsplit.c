/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:11:05 by mwilk             #+#    #+#             */
/*   Updated: 2014/11/10 18:16:50 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_word(const char *s, size_t i, char c)
{
	size_t	size;

	while (s[i] != c)
		i++;
	size = i;
	return (size);
}

static int	nb_word(const char *s, char c)
{
	size_t	i;
	size_t	nb;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if(s[i + 1] != c)
				nb++;
		}
		i++;
	}
	return (nb);
}

static char	**tab_alloc(size_t size)
{
	char	**ret;

	ret = (char **)malloc(sizeof(*ret) * (size + 1));
	if (ret == NULL)
		return (NULL);
	ret[0] = NULL;
	return (ret);
}

static void	split(char **ret, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if(s[i] == c)
		{
			if(s[i + 1] != c)
			{
				size = size_word(s, i, c);
				ret[j] = ft_strsub(s, i, size);
				j++;
			}
		}
		i++;
	}
}

char	**ft_strsplit(const char *s, char c)
{
	char	**ret;

	if (s == NULL)
		return (tab_alloc(0));
	ret = tab_alloc(nb_word(s,c));
	if (ret == NULL)
		return (NULL);
	split(ret, s, c);
	return (ret);
}
