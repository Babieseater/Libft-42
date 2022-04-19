/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:40:38 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/19 15:25:02 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ii;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		ii = 0;
		while (haystack[i + ii] == needle[ii] && i + ii < len)
		{
			if (needle[ii + 1] == '\0')
				return ((char *)haystack + i);
			ii++;
		}
		i++;
	}
	return (NULL);
}
