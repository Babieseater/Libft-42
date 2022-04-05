/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:20:45 by smayrand          #+#    #+#             */
/*   Updated: 2022/03/31 13:44:32 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int	main(void)
{
	char a[] = "Hypesack";
	char b[] = "ball";

	printf("%s\n", ft_memcpy(a, b, 4));
	return (0);	
}
