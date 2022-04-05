/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:56:52 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/04 13:47:19 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
	char a[] = "zzzz";
	char b[] = "aaaa";

	printf("%s\n", memmove(a, b, 2));
	printf("%s\n", ft_memmove(a, b, 2));
}