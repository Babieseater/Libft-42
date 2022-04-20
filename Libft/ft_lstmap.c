/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:10:26 by smayrand          #+#    #+#             */
/*   Updated: 2022/04/20 13:58:51 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;

	if (!lst)
		return (NULL);
	output = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&output, ft_lstnew(f(lst->content)));
		if (ft_lstlast(output) == NULL)
		{
			ft_lstclear(&output, *del);
			return (output);
		}
		lst = lst->next;
	}
	return (output);
}
