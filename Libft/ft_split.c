/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:46:49 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/08 13:15:03 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ii;
	int		words;
	char	**tab;

	if (!s)
		return (NULL);
	i = -1;
	words = ft_count(s, c);
	tab = ft_calloc(sizeof(char *), (words + 1));
	if (!tab)
		return (NULL);
	while (++i < words)
	{
		while (*s && *s == c)
			s++;
		if (ft_strchr(s, c))
			ii = ft_strchr(s, c) - s;
		else
			ii = ft_strlen(s);
		tab[i] = ft_substr(s, 0, ii);
		s += ii;
	}
	return (tab);
}
