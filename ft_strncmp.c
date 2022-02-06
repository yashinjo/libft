/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:11:37 by yshinjo           #+#    #+#             */
/*   Updated: 2022/01/28 12:26:25 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1cp;
	unsigned char	*s2cp;

	s1cp = (unsigned char *)s1;
	s2cp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n && *s1cp == *s2cp && *s1cp != '\0' && *s2cp != '\0')
	{
		s1cp++;
		s2cp++;
	}
	return (*s1cp - *s2cp);
}
