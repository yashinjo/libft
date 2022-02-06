/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshinjo </var/mail/yshinjo>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:06:56 by yshinjo           #+#    #+#             */
/*   Updated: 2022/02/01 23:46:09 by yshinjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s_cp;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start || !len)
		return (ft_strdup("\0"));
	if (s_len < len)
		len = s_len - start;
	s_cp = (char *)malloc(sizeof(char) * (len + 1));
	if (s_cp == NULL)
		return (NULL);
	ft_strlcpy(s_cp, s + start, len + 1);
	return (s_cp);
}
