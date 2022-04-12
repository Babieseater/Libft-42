/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:17:04 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/04 15:52:35 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	while (src[count])
		count++;
	if (dstsize)
		dst[i] = '\0';
	return (count);
}
