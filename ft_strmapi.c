/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:20:26 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 20:23:55 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_cp;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	s_cp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_cp == NULL)
		return (NULL);
	while (s[i])
	{
		s_cp[i] = (*f)(i, s[i]);
		i++;
	}
	s_cp[i] = '\0';
	return (s_cp);
}
