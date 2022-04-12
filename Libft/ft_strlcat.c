/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:58:28 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/05 11:47:42 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;
	size_t	sin;
	size_t	in;

	di = ft_strlen(dst);
	si = ft_strlen(src);
	in = 0;
	sin = 0;
	if (dstsize <= 0 || di > dstsize)
		return (si + dstsize);
	while (dst[sin])
		sin++;
	while (src[in] && sin < dstsize - 1)
	{
		dst[sin++] = src[in++];
	}
	dst[sin] = '\0';
	return (di + si);
}
