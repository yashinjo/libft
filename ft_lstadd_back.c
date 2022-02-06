/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:52:18 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 15:24:25 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_tail;

	if (lst == NULL || new == NULL)
		return ;
	lst_tail = ft_lstlast(*lst);
	if (*lst == NULL)
		*lst = new;
	else
		lst_tail->next = new;
}
