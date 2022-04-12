/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:10:04 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/08 15:02:26 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	rlen;
	char	*str;

	if (!s)
		return (NULL);
	rlen = ft_strlen((char *)s);
	if (len > rlen)
		str = ft_calloc((rlen + 1), sizeof(char));
	else
		str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (start >= rlen)
		return (str);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
