/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:18:10 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/07 12:12:39 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, (char *)s1, len);
	ft_strlcat(str, (char *)s2, len);
	return (str);
}
