/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:27:08 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 18:12:29 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhead;
	t_list	*new;

	if (f == NULL)
		return (NULL);
	newhead = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&newhead, (*del));
			return (NULL);
		}	
		ft_lstadd_back(&newhead, new);
		lst = lst->next;
	}
	return (newhead);
}
