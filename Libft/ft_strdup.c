/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:28:11 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/15 14:01:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	n;
	char	*cpy;

	i = 0;
	n = 0;
	while (s1[n])
		n++;
	cpy = malloc(sizeof(char) * (n + 1));
	if (cpy == NULL)
		return (NULL);
	while (i < n)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
