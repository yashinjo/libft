/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:05:11 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 13:57:57 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstp;

	lstp = (t_list *)malloc(sizeof(t_list));
	if (lstp == NULL)
		return (NULL);
	lstp->content = content;
	lstp->next = NULL;
	return (lstp);
}
