/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:55:57 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 23:06:25 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s1s2;
	char	*s1s2_head;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1s2 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1s2 == NULL)
		return (NULL);
	s1s2_head = s1s2;
	while (*s1)
		*s1s2++ = *s1++;
	while (*s2)
		*s1s2++ = *s2++;
	*s1s2 = '\0';
	return (s1s2_head);
}
