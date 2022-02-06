/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:58:05 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 20:08:34 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_cp;
	size_t	i;

	s1_cp = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s1_cp == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s1_cp[i] = s1[i];
		i++;
	}
	s1_cp[i] = '\0';
	return (s1_cp);
}
