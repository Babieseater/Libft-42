/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:23:20 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/04 14:17:28 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*x;
	char	*y;

	i = 0;
	x = (char *)dst;
	y = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		x[i] = y[i];
		i++;
	}
	return (dst);
}
