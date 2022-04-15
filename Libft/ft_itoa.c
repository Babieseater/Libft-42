/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:47:19 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/15 12:25:12 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ilen(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		op;

	len = ft_ilen(n);
	str = ft_calloc(ft_ilen(n) + 1, sizeof(char));
	if (!(str))
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(str, "-2147483648", 11));
	op = 0;
	if (n < 0)
	{
		n *= -1;
		op = 1;
	}
	while (--len >= 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		if (len == 0 && op == 1)
			str[0] = '-';
	}
	return (str);
}
